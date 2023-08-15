#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"

class TitleScene :public AbstractScene 
{
private:
	Input* input;

	int menyu;

	int a;
	int CursorX;
	int CursorY;

public:

	
	
	//コンストラクタ
	TitleScene();

	//デストラクタ
	~TitleScene();

	//描画以外の更新を実装する
	void Update() override;

	//描画に関することを実装する
	void Draw()const override;

	//シーンの切り替え
	AbstractScene* change()override;
};