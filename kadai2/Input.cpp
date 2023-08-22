#include"Input.h"

int Input::L_AnalogStickX = 0;
int Input::L_AnalogStickY = 0;

char Input::OldKey[16];
char Input::NowKey[16];


XINPUT_STATE input;

int Input::Get_LAnlogSticX()
{
	GetJoypadXInputState(DX_INPUT_PAD1, &input);

	L_AnalogStickX = input.ThumbLX;

	return L_AnalogStickX;
}

int Input::Get_LAnlogSticY()
{
	GetJoypadXInputState(DX_INPUT_PAD1, &input);

	L_AnalogStickY = input.ThumbLY;

	return L_AnalogStickY;
}

int Input::Get_Buttons()
{
	GetJoypadXInputState(DX_INPUT_PAD1, &input);

	for (int i = 0; i < 16; i++)
	{
		//OldKey[i] = NowKey[i];//�O��̓��̓{�^��
		NowKey[i] = input.Buttons[i];//���̓��̓{�^��

		//�{�^���������ꂽ�炻�̃{�^����������Ԃ�
		if (input.Buttons[i] == 1)
		{
			return i;
		}
	}
}
