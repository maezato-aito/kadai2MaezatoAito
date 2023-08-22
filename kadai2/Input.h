#pragma once
#include"comon.h"
class Input
{
public:

	static int Get_LAnlogSticX();
	static int Get_LAnlogSticY();

	static int Get_Buttons();

private:


	//�{�^�����͂̍\����
	struct XINPUT_STATE
	{
		unsigned char	Buttons[16];	// �{�^���P�U��( �Y���ɂ� XINPUT_BUTTON_DPAD_UP �����g�p����A
						//			0:������Ă��Ȃ�  1:������Ă��� )
		unsigned char	LeftTrigger;	// ���g���K�[( 0�`255 )
		unsigned char	RightTrigger;	// �E�g���K�[( 0�`255 )
		short		ThumbLX;	// ���X�e�B�b�N�̉����l( -32768 �` 32767 )
		short		ThumbLY;	// ���X�e�B�b�N�̏c���l( -32768 �` 32767 )
		short		ThumbRX;	// �E�X�e�B�b�N�̉����l( -32768 �` 32767 )
		short		ThumbRY;	// �E�X�e�B�b�N�̏c���l( -32768 �` 32767 )
	};

	//���X�e�B�b�N�̌X�����擾����
	static int L_AnalogStickX;
	static int L_AnalogStickY;

	static int Key;
	static char OldKey[16];
	static char NowKey[16];
	
};