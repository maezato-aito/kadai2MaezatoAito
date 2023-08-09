#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"



class GameMain :public AbstractScene
{
private:
	Input* input;
public:
	//コンストラクタ
	GameMain();

	//デストラクタ
	~GameMain();

	//描画以外の更新を実装する
	void Update() override;

	//描画に関することを実装する
	void Draw()const override;

	//跳ね返り
	void ChangeAngle();

	//シーンの切り替え
	AbstractScene* change()override;
};