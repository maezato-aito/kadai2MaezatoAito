#pragma once
#include"SphereCollider.h"

class Bullet:public SphereCollider
{
public://�A�N�Z�X�\

	virtual void Update() = 0;//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	virtual void Draw() = 0;
	virtual void Hit() = 0;//�_���[�W���󂯂����̏���

protected://�p��

	int damage;			//(�_���[�W)
	int speed;			//(���x)
	float angle;		//(�p�x)
	int acceleration;	//(���x�̕ω���)
	float angulVelocity;//(�p�x�̕ω���)

private://�A�N�Z�X�s��

};

