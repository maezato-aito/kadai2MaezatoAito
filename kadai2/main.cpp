#include"DxLib.h"
#include"AbstractScene.h"
#include"SceneManager.h"
//#include"TitleScene.h"
#include"GameMain.h"
#include"FpsCont.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	
	//widowモードで描画
	ChangeWindowMode(TRUE);

	//画面サイズ
	SetGraphMode(1280, 720, 32);

	//裏画面描画
	SetDrawScreen(DX_SCREEN_BACK);

	//垂直同期を切る
	SetWaitVSyncFlag(0);

	//初期化処理
	if (DxLib_Init() == -1) {
		return -1;
	}

	SceneManager SMG(dynamic_cast<AbstractScene*>(new GameMain));

	//ゲームループ
	while (ProcessMessage() == 0 && SMG.change() != nullptr) 
	{

		// 画面の初期化
		ClearDrawScreen();
		//タイトルの描画
		SMG.Update();
		//タイトルの描画
		SMG.Draw();
		//フレームレート制御
		FpsControll_Update();
		//待機
		FpsControll_Wait();
		
		ScreenFlip();
	}
	//dxlib終了
	DxLib_End();

	return 0;
}
