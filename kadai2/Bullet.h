#pragma once
#include"SphereCollider.h"
#include"comon.h"

class Bullet:public SphereCollider
{
public://�A�N�Z�X�\

	void Update();//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	void Draw();//�e�̕`��
	void GetDamage();//�_���[�W���󂯂����̏���

protected://�p��

	static int BLx;				//�e��x���W
	static int BLy;				//�e��y���W
	static int damage;			//(�_���[�W)
	static int speed;			//(���x)
	static float angle;			//(�p�x)
	static int acceleration;	//(���x�̕ω���)
	static float angulVelocity;	//(�p�x�̕ω���)

private://�A�N�Z�X�s��

};

