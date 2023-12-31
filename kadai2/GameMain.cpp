#include"GameMain.h"
#include"DxLib.h"


//コンストラクタ（呼び出し）
GameMain::GameMain()
{
	player = new Player();
	enemy = new Enemy();

	for (int i = 0; i < 1000; i++)
	{
		bullets[i] = nullptr;
	}
}
//デストラクタ(解体)
GameMain::~GameMain()
{
	delete player;
	delete enemy;
	delete[] bullets;
}
//描画以外の更新
AbstractScene* GameMain::Update()
{
	player->Update(this);
	for (int i = 0; i < 1000; i++)
	{
		if (bullets[i] != nullptr) {
			bullets[i]->Update();
		}
	}
	return this;
}
//描画の更新
void GameMain::Draw() const
{
	DrawString (0, 0, "ゲームメイン", 0xff3355, TRUE);
	

	
	player->Draw();
	enemy->Draw();

	for (int i = 0; i < 1000; i++)
	{
		if (bullets[i] != nullptr) {
			bullets[i]->Draw();
		}
	}

	
}
//シーンの切り替え
AbstractScene* GameMain::change()
{
	return this;
}

void GameMain::CreateBullets(int x,int y)
{
	for (int i = 0; i < 1000; i++)
	{
		if (bullets[i] == nullptr) {
			bullets[i] = new Bullet(x, y);
			break;
		}
	}
}
