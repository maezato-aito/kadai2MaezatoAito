#pragma once
#include"comon.h"
#include"CharaBase.h"
#include"Bullet.h"

#include"Input.h"

class Player:CharaBase
{
public:
	Player();
	~Player();

	void Update() override;

	void Draw() override;

	void Hit() override;

private:
	int Score();

	int Get_MoveX;
	int Get_MoveY;

};

