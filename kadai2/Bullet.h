#pragma once
#include"SphereCollider.h"
#include"comon.h"
//#include"Player.h"

class Bullet:public SphereCollider
{
public://アクセス可能

	Bullet(int x, int y);
	/*Bullet(float a);*/
	~Bullet();
	void Update();//ゲームメインシーンをポインタで受け取る
	void Draw()const;//弾の描画
	void GetDamage();//ダメージを受けた時の処理
	void SetupBullets(int x,int y,int d,int s,float a);//弾の情報を入力してくれる

protected://継承

	int Bulletsflg;		//弾があるなら:1 弾がないなら:0
	int damage;			//(ダメージ)
	int speed;			//(速度)
	float angle;		//(角度)
	int acceleration;	//(速度の変化量)
	float angulVelocity;//(角度の変化量)

private://アクセス不可

	/*Player* player;*/
};

