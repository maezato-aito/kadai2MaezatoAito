#pragma once
#include"SphereCollider.h"
#include"comon.h"

class Bullet:public SphereCollider
{
public://アクセス可能

	void Update();//ゲームメインシーンをポインタで受け取る
	void Draw();//弾の描画
	void GetDamage();//ダメージを受けた時の処理

protected://継承

	static int BLx;				//弾のx座標
	static int BLy;				//弾のy座標
	static int damage;			//(ダメージ)
	static int speed;			//(速度)
	static float angle;			//(角度)
	static int acceleration;	//(速度の変化量)
	static float angulVelocity;	//(角度の変化量)

private://アクセス不可

};

