#pragma once
#include"comon.h"
class Input
{
public:

	static int Update();

	static int Get_OldKey(); //�O��̓���
	static int Get_NowKey(); //����̓���

private:
	static int AnalogStickX;
	static int AnalogStickY;

	static int OldKey;
	static int NowKey;
	static int KeyFlg;
};