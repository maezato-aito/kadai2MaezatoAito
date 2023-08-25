#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"


class EndScene :public AbstractScene
{
private:

public:

	int time;

	EndScene();
	~EndScene();
	//描画以外の更新を実装する
	AbstractScene* Update() override;

	//描画に関することを実装する
	void Draw() const override;

	//シーンの切り替え
	AbstractScene* change()override;
};