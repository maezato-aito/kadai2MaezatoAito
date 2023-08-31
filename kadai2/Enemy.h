#pragma once
#include"comon.h"
#include"CharaBase.h"
#include"NwaySpawner.h"

class GameMain;
class Enemy :CharaBase
{
public:
	Enemy();
	~Enemy();

	void Update(GameMain* gm) override;

	void Draw() override;

	void Hit() override;

private:
	int Score();

	int hp;
	int point; //(スコアの加算量)
};

class weapon :NwaySpawner//(BulletsSpawnerの子クラス)
{

};

