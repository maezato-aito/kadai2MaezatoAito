#pragma once
#include"comon.h"
#include"CharaBase.h"
#include"NwaySpawner.h"

#include"Input.h"
class GameMain;
class Player:CharaBase
{
public:
	Player();
	~Player();

	NwaySpawner* weapon;

	void Update(GameMain* gm) override;

	void Draw() override;

	void Hit() override;

private:
	int Score();

	int Get_MoveX;
	int Get_MoveY;

	int Get_Button;

};

