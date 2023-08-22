#pragma once
#include"comon.h"
class Input
{
public:

	static int Get_LAnlogSticX();
	static int Get_LAnlogSticY();

	static int Get_Buttons();

private:


	//ボタン入力の構造体
	struct XINPUT_STATE
	{
		unsigned char	Buttons[16];	// ボタン１６個( 添字には XINPUT_BUTTON_DPAD_UP 等を使用する、
						//			0:押されていない  1:押されている )
		unsigned char	LeftTrigger;	// 左トリガー( 0～255 )
		unsigned char	RightTrigger;	// 右トリガー( 0～255 )
		short		ThumbLX;	// 左スティックの横軸値( -32768 ～ 32767 )
		short		ThumbLY;	// 左スティックの縦軸値( -32768 ～ 32767 )
		short		ThumbRX;	// 右スティックの横軸値( -32768 ～ 32767 )
		short		ThumbRY;	// 右スティックの縦軸値( -32768 ～ 32767 )
	};

	//左スティックの傾きを取得する
	static int L_AnalogStickX;
	static int L_AnalogStickY;

	static int Key;
	static char OldKey[16];
	static char NowKey[16];
	
};