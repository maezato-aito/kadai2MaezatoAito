#pragma once
#include"SphereCollider.h"
#include"comon.h"

class Bullet:public SphereCollider
{
public://�A�N�Z�X�\

	void Update();//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	void Draw();
	void Hit();//�_���[�W���󂯂����̏���

protected://�p��

	int damage;			//(�_���[�W)
	int speed;			//(���x)
	float angle;		//(�p�x)
	int acceleration;	//(���x�̕ω���)
	float angulVelocity;//(�p�x�̕ω���)

private://�A�N�Z�X�s��

};

