# Arduino-MIDI-to-FF14-adapter
����́AMIDI�L�[�{�[�h��PS4�̃t�@�C�i���t�@���^�W�[14�̊y�퉉�t�����邽�߂̃A�_�v�^�v���O�����ł��B
This is an adapter program for playing instruments of FINAL FANTASY XIV on PS4 with a MIDI keyboard.

# �K�v�ȃn�[�h�E�F�A�iHardware Requirements�j
1. Arduino Leonardo (ATmega32u4)
2. Arduino USB Host Shield

# �g����
1. USB Host Shield �̃s�����AArduino Leonardo �̃\�P�b�g�ɍ�������ł��������B
2. ���̃T�C�g���� Arduino IDE ���_�E�����[�h���� PC �ɃC���X�g�[�����Ă��������B
   https://www.arduino.cc/en/Main/Software
3. ���̃T�C�g�� How to include the library �� Manual Installation ���Q�l�ɂ��āAUSB Host Library Rev.2.0 �� Arduino IDE �ɃC���X�g�[�����Ă��������B
   https://github.com/felis/USB_Host_Shield_2.0
4. Leonardo �� USB micro-B �R�l�N�^�� PC �� USB �P�[�u���Őڑ����Ă��������B
5. Arduino IDE �̃��j���[�� [�c�[��] -> [�{�[�h] �� [Arduino Leonardo] ��I�����Ă��������B���l�� [�c�[��] -> [�V���A���|�[�g] �ŁA[COM*(Arduino Leonardo)] ��I�����Ă��������i*�͐����j�B
6. ���̃T�C�g�� USB_MIDI_converter.ino ���_�E�����[�h���AArduino IDE �ŁAUSB_MIDI_converter.ino ���J���Ă��������B
7. Arduino IDE �̃c�[���o�[�� (v) �A�C�R�����N���b�N���Ă��������B���̕��Ɂu�X�P�b�`���R���p�C�����Ă��܂��c�v�ƕ\������A���΂炭�҂Ɓu�R���p�C�����������܂����B�v�ƕ\������܂��B
8. Arduino IDE �̃c�[���o�[�� (->) �A�C�R�����N���b�N���Ă��������B�R���p�C���̌�A�u�}�C�R���{�[�h�ɏ�������ł��܂��c�v�u�{�[�h�ւ̏������݂��������܂����B�v�ƕ\�������Ί����ł��B
9. Arduino Leonardo �� PC ����O���āAUSB A �̕��� MIDI �L�[�{�[�h��ڑ����AUSB micor-B �̕��� PS4 �ɐڑ����āAFF14 �̋�V���l�̊y�퉉�t�̃L�[���蓖�Ă̐ݒ�ŁAQWERTY �L�[�{�[�h�̑���� MIDI �L�[�{�[�h�𑀍삵�Đݒ肵�Ă��������B

