#include <usbh_midi.h>
#include <usbhub.h>
#include <Keyboard.h>

#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

USB Usb;
USBH_MIDI  Midi(&Usb);

void MIDI_poll();
void doDelay(uint32_t t1, uint32_t t2, uint32_t delayTime);

// keyboard data list. index: 0 to 36
char keys[] = {
  'a', '1',   // c(48)
  'b', '2',   // d
  'c',        // e
  'd', '3',   // f
  'e', '4',   // g
  'f', '5',   // a
  'g',        // b
  'h', '6',   // c(60)
  'i', '7',   // d
  'j',        // e
  'k', '8',   // f
  'l', '9',   // g
  'm', '0',   // a
  'n',        // b
  'o', 'w',   // c(72)
  'p', 'x',   // d
  'q',        // e
  'r', 'y',   // f
  's', 'z',   // g
  't', '.',   // a
  'u',        // b
  'v',        // c(84)
};
#define BASE_NOTE 48  // 一番低い音のノート番号
const uint8_t keyLength = sizeof(keys); // キー配列の長さ
const uint8_t bias = keyLength - (BASE_NOTE % keyLength); // 一番低いノート番号を配列の0番目にするバイアス

void setup()
{
  // initialize control over the keyboard.
  Keyboard.begin();
  if (Usb.Init() == -1) {
    while (1);  // halt
  }
  delay( 200 );
}

void loop()
{
  Usb.Task();
  uint32_t t1 = (uint32_t)micros();
  if ( Midi ) {
    MIDI_poll();  // MIDIポーリング
  }
  //delay(1ms)
  doDelay(t1, (uint32_t)micros(), 1000);
}

// USB MIDI コントローラのポーリングとキーボードの送信
void MIDI_poll()
{
  uint8_t outBuf[ 3 ];
  uint8_t size;

  do {
    if ( (size = Midi.RecvData(outBuf)) > 0 ) {
      switch (outBuf[0] & 0xf0) {
        case 0x80:  // note off
          Keyboard.release(keys[(outBuf[1] + bias) % keyLength]);
          break;
        case 0x90:  // note on
          if (outBuf[2] != 0) {
            Keyboard.press(keys[(outBuf[1] + bias) % keyLength]);
          }
          else {
            Keyboard.release(keys[(outBuf[1] + bias) % keyLength]);
          }
          break;
      }
    }
  } while (size > 0);
}
      
// ディレイタイム (max 16383 us)
void doDelay(uint32_t t1, uint32_t t2, uint32_t delayTime)
{
  uint32_t t3;

  t3 = t2 - t1;
  if ( t3 < delayTime ) {
    delayMicroseconds(delayTime - t3);
  }
}
