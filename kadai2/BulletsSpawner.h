#pragma once

class BulletsSpaWner
{
public:
	 virtual void Shoot() = 0 ;

protected:
	int speed;			//(���x)
	float angle;		// (�p�x)
	int acceleration;	//(���x�̕ω���)
	float angulVelocity;//(�p�x�̕ω���)

private:

};