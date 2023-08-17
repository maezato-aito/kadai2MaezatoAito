#pragma once
#include"comon.h"
class Input
{
public:

	static int Update();

	static int Get_OldKey(); //�O��̓���
	static int Get_NowKey(); //����̓���

	static int Get_AnlogSticX();
	static int Get_AnlogSticY();

private:
	static int AnalogStickX;
	static int AnalogStickY;

	static int OldKey;
	static int NowKey;
	static int KeyFlg;
};