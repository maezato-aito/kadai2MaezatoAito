#pragma once

class BulletsSpaWner
{
public:
	 virtual void Shoot() = 0 ;

protected:
	int speed;			//(速度)
	float angle;		// (角度)
	int acceleration;	//(速度の変化量)
	float angulVelocity;//(角度の変化量)

private:

};