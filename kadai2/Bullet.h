#pragma once
#include"SphereCollider.h"

class Bullet:public SphereCollider
{
public://アクセス可能

	virtual void Update() = 0;//ゲームメインシーンをポインタで受け取る
	virtual void Draw() = 0;
	virtual void Hit() = 0;//ダメージを受けた時の処理

protected://継承

	int damage;			//(ダメージ)
	int speed;			//(速度)
	float angle;		//(角度)
	int acceleration;	//(速度の変化量)
	float angulVelocity;//(角度の変化量)

private://アクセス不可

};

