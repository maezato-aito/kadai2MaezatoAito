#include"Input.h"

int Input::L_AnalogStickX = 0;
int Input::L_AnalogStickY = 0;

int Input::R_AnalogStickX = 0;
int Input::R_AnalogStickY = 0;

int Input::L_Trigger = 0;
int Input::R_Trigger = 0;

char Input::OldB[16];
char Input::NowB[16];
char Input::BFlg[16];


XINPUT_STATE Input::input;

void Input::Update()
{
	GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);

	for (int i = 0; i < 16; i++)
	{
		OldB[i] = NowB[i];//前回の入力ボタン
		NowB[i] = input.Buttons[i];//今の入力ボタン
		BFlg[i] = NowB[i] & ~OldB[i];
	}

	L_AnalogStickX=input.ThumbLX;
	L_AnalogStickY=input.ThumbLY;

	R_AnalogStickX=input.ThumbRX; 
	R_AnalogStickY=input.ThumbRY; 

	R_Trigger=input.LeftTrigger;
	L_Trigger=input.RightTrigger;

}

int Input::Get_LAnlogSticX()
{
	return L_AnalogStickX;
}
int Input::Get_LAnlogSticY()
{
	return L_AnalogStickY;
}

int Input::Get_RAnlogSticX()
{
	return R_AnalogStickX;
}
int Input::Get_RAnlogSticY()
{
	return R_AnalogStickY;
}

int Input::Get_RTrigger()
{
	return R_Trigger;
}
int Input::Get_LTrigger() 
{
	return L_Trigger;
}

int Input::Get_NowButtons(int key)
{
	return NowB[key];
}
int Input::Get_OldButtons(int key)
{
	return OldB[key];
}
int Input::Get_ButtonFlg(int key)
{
	return BFlg[key];
}
