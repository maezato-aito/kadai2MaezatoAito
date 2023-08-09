#include"TitleScene.h"
#include"SceneManager.h"
#include"GameMain.h"
#include"EndScene.h"
#include"DxLib.h"

//コンストラクタ（呼び出し）
TitleScene::TitleScene() 
{
	 CursorX = 260;
	 CursorY = 245;
	 menyu = 0;
}
//デストラクタ(解体)
TitleScene::~TitleScene() 
{
	delete this;
}
//描画以外の更新
void TitleScene::Update()
{

	OldKey = NowKey;
	NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	KeyFlg = NowKey & ~OldKey;

	if (KeyFlg & PAD_INPUT_DOWN)
	{
		++menyu;
		if (++menyu > 2)
		{
			menyu = 0;
		}
	}
	if (KeyFlg & PAD_INPUT_UP) {
		--menyu;
		if (--menyu < 0)
		{
			menyu = 2;
		}
	}
}
//描画の更新
void TitleScene::Draw() const 
{
	

	DrawString(0,0, "タイトルメニュー", 0xffffff, TRUE);

	// タイトル画像の表示
	LoadGraphScreen(0, 0, "images/Title.bmp", TRUE);

	int cursor = 50 * menyu;

	//カーソル描画
	DrawTriangle(CursorX, CursorY + cursor, CursorX, CursorY + 50 + cursor, CursorX + 25, CursorY + 25 + cursor, 0x123456, TRUE);

	DrawFormatString(20, 20, 0x746378, "%d", menyu, TRUE);
}
//シーンの切り替え
AbstractScene* TitleScene::change() 
{
	if (KeyFlg & PAD_INPUT_A) {
		if (menyu == 0)
		{
			return new GameMain();
		}
	}
	if (KeyFlg & PAD_INPUT_A) {
		if (menyu == 2)
		{
			return new EndScene();
		}
	}

	return this;
}