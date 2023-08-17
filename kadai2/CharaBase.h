#pragma once
#include"SphereCollider.h"

class CharaBase : public SphereCollider
{
public:

	virtual void Update() = 0;//ゲームメインシーンをポインタで受け取る
	virtual void Draw() = 0;
	virtual void Hit() = 0;//ダメージを受けた時の処理

	static int speed;
	static int image;
};

