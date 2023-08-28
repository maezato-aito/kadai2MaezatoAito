#pragma once
#include"comon.h"
class Input
{
public:
	//左スティックの値を返す
	static int Get_LAnlogSticX();
	static int Get_LAnlogSticY();

	//左スティックの値を返す
	static int Get_RAnlogSticX();
	static int Get_RAnlogSticY();

	//左右トリガーの値を返す
	static int Get_RTrigger();
	static int Get_LTrigger();

	static int Get_NowButtons(int key);//前のボタンの入力を受け取る
	static int Get_OldButtons(int key);//今のボタンの入力を取る
	static int Get_ButtonFlg(int key);//今と前のボタンの入力を比べる

	static void Update();

	static XINPUT_STATE input;
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

	static int L_AnalogStickX;//左スティックのX傾きの変数
	static int L_AnalogStickY;//左スティックのY傾きの変数

	
	static int R_AnalogStickX;//右スティックのX傾きの変数
	static int R_AnalogStickY;//右スティックのY傾きの変数
	
	static int R_Trigger;//右のトリガーを取得する変数
	static int L_Trigger;//左のトリガーを取得する変数

	static int Key;//ボタン入力配列用変数

	
	static char OldB[16];//前のボタンの入力を受け取る変数
	static char NowB[16];//今のボタンの入力を取る変数
	static char BFlg[16];//今と前のボタンの入力を比べる変数

	
};