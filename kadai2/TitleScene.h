#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"

class TitleScene :public AbstractScene 
{
private:

public:

	int  OldKey;
	int  NowKey;
	int  KeyFlg;
	int menyu;

	int CursorX;
	int CursorY;
	
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