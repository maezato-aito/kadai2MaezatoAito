#pragma once
#include"comon.h"
class Input
{
public:
	//���X�e�B�b�N�̒l��Ԃ�
	static int Get_LAnlogSticX();
	static int Get_LAnlogSticY();

	//���X�e�B�b�N�̒l��Ԃ�
	static int Get_RAnlogSticX();
	static int Get_RAnlogSticY();

	//���E�g���K�[�̒l��Ԃ�
	static int Get_RTrigger();
	static int Get_LTrigger();

	static int Get_NowButtons(int key);//�O�̃{�^���̓��͂��󂯎��
	static int Get_OldButtons(int key);//���̃{�^���̓��͂����
	static int Get_ButtonFlg(int key);//���ƑO�̃{�^���̓��͂��ׂ�

	static void Update();

	static XINPUT_STATE input;
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

	static int L_AnalogStickX;//���X�e�B�b�N��X�X���̕ϐ�
	static int L_AnalogStickY;//���X�e�B�b�N��Y�X���̕ϐ�

	
	static int R_AnalogStickX;//�E�X�e�B�b�N��X�X���̕ϐ�
	static int R_AnalogStickY;//�E�X�e�B�b�N��Y�X���̕ϐ�
	
	static int R_Trigger;//�E�̃g���K�[���擾����ϐ�
	static int L_Trigger;//���̃g���K�[���擾����ϐ�

	static int Key;//�{�^�����͔z��p�ϐ�

	
	static char OldB[16];//�O�̃{�^���̓��͂��󂯎��ϐ�
	static char NowB[16];//���̃{�^���̓��͂����ϐ�
	static char BFlg[16];//���ƑO�̃{�^���̓��͂��ׂ�ϐ�

	
};