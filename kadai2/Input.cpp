#include"Input.h"

int Input::L_AnalogStickX = 0;
int Input::L_AnalogStickY = 0;

char Input::OldKey[16];
char Input::NowKey[16];


XINPUT_STATE Input::input;

void Input::Update()
{
	GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);

	for (int i = 0; i < 16; i++)
	{
		OldKey[i] = NowKey[i];//�O��̓��̓{�^��
		NowKey[i] = input.Buttons[i];//���̓��̓{�^��
	}
}

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

int Input::Get_Buttons(int key)
{
	return NowKey[key];
}
