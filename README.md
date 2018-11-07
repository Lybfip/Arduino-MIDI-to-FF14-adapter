# Arduino-MIDI-to-FF14-adapter
これは、MIDIキーボードでPS4のファイナルファンタジー14の楽器演奏をするためのアダプタプログラムです。
This is an adapter program for playing instruments of FINAL FANTASY XIV on PS4 with a MIDI keyboard.

# 必要なハードウェア（Hardware Requirements）
1. Arduino Leonardo (ATmega32u4)
2. Arduino USB Host Shield

# 使い方
1. USB Host Shield のピンを、Arduino Leonardo のソケットに差し込んでください。
2. 次のサイトから Arduino IDE をダウンロードして PC にインストールしてください。
   https://www.arduino.cc/en/Main/Software
3. 次のサイトの How to include the library の Manual Installation を参考にして、USB Host Library Rev.2.0 を Arduino IDE にインストールしてください。
   https://github.com/felis/USB_Host_Shield_2.0
4. Leonardo の USB micro-B コネクタと PC を USB ケーブルで接続してください。
5. Arduino IDE のメニューの [ツール] -> [ボード] で [Arduino Leonardo] を選択してください。同様に [ツール] -> [シリアルポート] で、[COM*(Arduino Leonardo)] を選択してください（*は数字）。
6. このサイトの USB_MIDI_converter.ino をダウンロードし、Arduino IDE で、USB_MIDI_converter.ino を開いてください。
7. Arduino IDE のツールバーの (v) アイコンをクリックしてください。下の方に「スケッチをコンパイルしています…」と表示され、しばらく待つと「コンパイルが完了しました。」と表示されます。
8. Arduino IDE のツールバーの (->) アイコンをクリックしてください。コンパイルの後、「マイコンボードに書き込んでいます…」「ボードへの書き込みが完了しました。」と表示されれば完了です。
9. Arduino Leonardo を PC から外して、USB A の方に MIDI キーボードを接続し、USB micor-B の方を PS4 に接続して、FF14 の吟遊詩人の楽器演奏のキー割り当ての設定で、QWERTY キーボードの代わりに MIDI キーボードを操作して設定してください。

