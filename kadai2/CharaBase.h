#pragma once
#include"SphereCollider.h"

class CharaBase : public SphereCollider
{
public://アクセス可能

	virtual void Update() = 0;//ゲームメインシーンをポインタで受け取る
	virtual void Draw() = 0;
	virtual void Hit() = 0;//ダメージを受けた時の処理

protected://継承

	int speed;
	int image;

private://アクセス負荷
	


};

