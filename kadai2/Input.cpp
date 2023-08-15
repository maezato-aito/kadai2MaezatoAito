#include"Input.h"

int Input::AnalogStickX = 0;
int Input::AnalogStickY = 0;

int Input::OldKey;
int Input::NowKey;
int Input::KeyFlg;

int Input::Update()
{
	GetJoypadAnalogInput(&AnalogStickX, &AnalogStickY, DX_INPUT_KEY_PAD1);

	return AnalogStickX , AnalogStickY;
}

int Input::Get_NowKey()
{
	int a = AnalogStickX;

	return a;
}

int Input::Get_OldKey()
{
	
	KeyFlg = Get_NowKey() & ~OldKey;

	return KeyFlg;
}