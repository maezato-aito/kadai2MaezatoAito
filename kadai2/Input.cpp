#include"Input.h"

int Input::AnalogStickX = 0;
int Input::AnalogStickY = 0;

int Input::OldKey;
int Input::NowKey;
int Input::KeyFlg;

int Input::Update()
{
	return 0;
}

int Input::Get_AnlogSticX()
{
	GetJoypadAnalogInput(&AnalogStickX, &AnalogStickY, DX_INPUT_KEY_PAD1);

	return AnalogStickX;
}

int Input::Get_AnlogSticY()
{
	GetJoypadAnalogInput(&AnalogStickX, &AnalogStickY, DX_INPUT_KEY_PAD1);

	return AnalogStickY;
}

//int Input::Get_key()
//{
//
//}