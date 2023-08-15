#pragma once
#include"comon.h"
class Input
{
public:

	static int Update();

	static int Get_OldKey(); //前回の入力
	static int Get_NowKey(); //今回の入力

private:
	static int AnalogStickX;
	static int AnalogStickY;

	static int OldKey;
	static int NowKey;
	static int KeyFlg;
};