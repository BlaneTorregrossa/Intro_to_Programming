//Classes Exercise 1

#include <iostream>

class Zombie
{



private:

	float zHealth, zdHealth;
	float zAttack, zdAttack;
	float zPreviousLife, zdPreviousLife;

public:

	void setZombieHealth(float zHealth)
	{
		if (zHealth == 100.0f)
			zdHealth = 50.0f;
		else
			zdHealth = zHealth;
	}

};





