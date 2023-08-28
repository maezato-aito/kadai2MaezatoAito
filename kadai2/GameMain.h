#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"
#include"Player.h"
#include"Bullet.h"



class GameMain :public AbstractScene
{
private:
	Player* player;
	Bullet* bullets[1000];

public:
	//コンストラクタ
	GameMain();

	//デストラクタ
	~GameMain();

	//描画以外の更新を実装する
	AbstractScene* Update() override;

	//描画に関することを実装する
	void Draw()const override;

	//跳ね返り
	void ChangeAngle();

	//シーンの切り替え
	AbstractScene* change()override;

	void CreateBullets(int x, int y);
};