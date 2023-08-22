#include"Input.h"

int Input::L_AnalogStickX = 0;
int Input::L_AnalogStickY = 0;

XINPUT_STATE input;

int Input::Update()
{

}

int Input::Get_LAnlogSticX()
{

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

	Key = input.Buttons;

	return Key;
}
