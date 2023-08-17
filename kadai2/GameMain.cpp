#include"GameMain.h"
#include"DxLib.h"


//コンストラクタ（呼び出し）
GameMain::GameMain()
{
	player = new Player();
}
//デストラクタ(解体)
GameMain::~GameMain()
{
	
}
//描画以外の更新
void GameMain::Update()
{
	player->Update();
}
//描画の更新
void GameMain::Draw() const
{
	DrawString (0, 0, "ゲームメイン", 0xff3355, TRUE);
	
	player->Draw();
}
//シーンの切り替え
AbstractScene* GameMain::change()
{
	return this;
}