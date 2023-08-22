#pragma once
#include"comon.h"
#include"CharaBase.h"
#include"BulletsSpawner.h"

#include"Input.h"

class Player:CharaBase
{
public:
	Player();
	~Player();

	/*BulletsSpawner* weapon;*/

	void Update() override;

	void Draw() override;

	void Hit() override;

private:
	int Score();

	int Get_MoveX;
	int Get_MoveY;

	char Get_Button;

};

