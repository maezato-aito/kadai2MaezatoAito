#pragma once
#include"SphereCollider.h"
#include"comon.h"

class Bullet:public SphereCollider
{
public://アクセス可能

	void Update();//ゲームメインシーンをポインタで受け取る
	void Draw();
	void Hit();//ダメージを受けた時の処理

protected://継承

	int damage;			//(ダメージ)
	int speed;			//(速度)
	float angle;		//(角度)
	int acceleration;	//(速度の変化量)
	float angulVelocity;//(角度の変化量)

private://アクセス不可

};

