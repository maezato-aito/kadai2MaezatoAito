#pragma once
#include"SphereCollider.h"
#include"comon.h"
//#include"Player.h"

class Bullet:public SphereCollider
{
public://�A�N�Z�X�\

	Bullet(int x, int y);
	/*Bullet(float a);*/
	~Bullet();
	void Update();//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	void Draw()const;//�e�̕`��
	void GetDamage();//�_���[�W���󂯂����̏���
	void SetupBullets(int x,int y,int d,int s,float a);//�e�̏�����͂��Ă����

protected://�p��

	int Bulletsflg;		//�e������Ȃ�:1 �e���Ȃ��Ȃ�:0
	int damage;			//(�_���[�W)
	int speed;			//(���x)
	float angle;		//(�p�x)
	int acceleration;	//(���x�̕ω���)
	float angulVelocity;//(�p�x�̕ω���)

private://�A�N�Z�X�s��

	/*Player* player;*/
};

