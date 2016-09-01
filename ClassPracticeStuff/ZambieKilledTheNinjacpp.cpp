#include <iostream>
struct Zambie
{
	int health;
	bool alive;
	int spirit;
	int spareArm;
	int regeneration;
};
struct Ninja
{
	int health;
	bool alive;
	int spirit;
	int sharpObjects;
	int timeToMeditate;
};

//Make this attack work for both sides. Has to include bool.
int Fight(Zambie &Attacker, Ninja &Defender)
{
	
	return 1;
}


//Regen for zombie's spirit
int SpiritRegen(Zambie &z)
{
	z.spirit += 1;
	return 1;
}
//regen for ninja's spirit
int spiritRegen(Ninja &n)
{
	n.spirit += 1;
	return 1;
}

int ArmAttack(Zambie &z, Zambie &zz, Ninja &n, Ninja &nn)
{
	z.spareArm -= 1;
	zz.spareArm -= 1;
	n.health -= 30;
	nn.health -= 30;
	return 1;
}

int RegeneratingZambies(Zambie &z, Zambie &zz)
{
	z.regeneration -= 1;
	zz.regeneration -= 1;
	z.health += 20;
	zz.health += 20;
	return 1;
}

int ThrowingSharpObjects(Zambie &z, Zambie &zz, Ninja &n, Ninja &nn)
{
	z.health -= 20;
	zz.health -= 20;
	n.sharpObjects -= 1;
	nn.sharpObjects -= 1; 
	return 1;
}

int Meditation(Ninja &n, Ninja &nn)
{
	n.timeToMeditate -= 1;
	nn.timeToMeditate -= 1;
	n.health += 20;
	nn.health += 20;
	return 1;
}



int KillAll(Zambie &z, Zambie &zz, Ninja &n, Ninja &nn)
{
	z.alive = false;
	n.alive = false;
	zz.alive = false;
	nn.alive = false;
	return 1;
}


int main()
{
	Zambie chris = { 90, true, 5, 1, 1 };
	Zambie matthew = { 100, true, 15, 1, 1 };
	Ninja regi = { 150, true, 45, 1, 1 };
	Ninja wilson = { 70, true, 15, 1, 1 };
	char input = '0';



	// Make each character have the ability to attack each other by pressing certain keys
	// Make a win/fail condition if both zambies or ninjas die
	//Make a spirit regen if a character does not attack for one turn
	
		

	while (input != 'q')
	{

		std::cout << "Please input an attack (a, s, d, or f for zambie attacks and z, x, c, or v for ninja attacks.)" << std::endl;
		std::cout << "To use team abilities press g or h for zambies and press b or n for ninjas. (One time use for each ability.)" << std::endl;
		std::cout << "Press k for last option if no other options are working" << std::endl;
		system("pause");
		std::cout << "Zambie Health:" << std::endl << "Chris: " << chris.health << " Matthew: " << matthew.health << std::endl;
		std::cout << "Ninja Health: " << std::endl << "Regi: " << regi.health << " Wilson: " << wilson.health << std::endl;
		system("pause");
		system("cls");

		//Attack commands 
		std::cin >> input;
		if (input == 'a' && chris.spirit > 0)
		{
			std::cout << "CHRIS FIGHT REGI" << std::endl;
			Fight(chris, regi);
		}
		if (input == 's' && chris.spirit > 0)
		{
			std::cout << "CHRIS FIGHT WILSON" << std::endl;
			Fight(chris, wilson);
		}
		if (input == 'd' && matthew.spirit > 0)
		{
			std::cout << "MATTHEW FIGHT REGI" << std::endl;
			Fight(matthew, regi);
		}
		if (input == 'f' && matthew.spirit > 0)
		{
			std::cout << "MATTHEW FIGHT WILSON" << std::endl;
			Fight(matthew, wilson);
		}
		if (input == 'z' && regi.spirit > 0)
		{
			std::cout << "REGI FIGHT CHRIS" << std::endl;
			Fight(chris, regi);
		}
		if (input == 'x' && regi.spirit > 0)
		{
			std::cout << "REGI FIGHT MATTHEW" << std::endl;
			Fight(matthew, regi);
		}
		if (input == 'c' && wilson.spirit > 0)
		{
			std::cout << "WILSON FIGHT CHRIS" << std::endl;
			Fight(chris, wilson);
		}
		if (input == 'v' && wilson.spirit > 0)
		{
			std::cout << "WILSON FIGHT MATTHEW" << std::endl;
			Fight(matthew, wilson);
		}
		//Team Abilities
		if ((input == 'g' && chris.spareArm == 1) && (input == 'g' && matthew.spareArm == 1))
		{
			ArmAttack(chris, matthew, regi, wilson);
			std::cout << "Both zambies attacked the ninjas by ripping an arm off their own ally and thowing that arm at the ninjas." << std::endl;
		}
		if ((input == 'h' && chris.regeneration == 1) && (input == 'h' && matthew.regeneration))
		{
			RegeneratingZambies(chris, matthew);
			std::cout << "Both zombies regenerate" << std::endl;
		}



		//Add Ninja team abilities here



		//Instant end
		if (input == 'k')
		{
			KillAll(chris, matthew, regi, wilson);
			std::cout << "Both groups have suffered from sudden heart attacks. Very anti-climatic...";
		}
		//Spirit Regeneration
		if ((input != 'a' && chris.spirit < 5) && (input != 's' && chris.spirit < 5))
		{
			SpiritRegen(chris);
		}
		if ((input != 'd' && matthew.spirit < 15) && (input != 'f' && matthew.spirit < 15))
		{
			SpiritRegen(matthew);
		}
		if ((input != 'z' && regi.spirit < 25) && (input != 'x' && regi.spirit < 25))
		{
			spiritRegen(regi);
			std::cout << "a ninja was able to regain some missing spirit" << std::endl;
		}
		if ((input != 'c' && wilson.spirit < 20) && (input != 'v' && wilson.spirit < 20))
		{
			spiritRegen(wilson);
			std::cout << "a ninja was able to regain some missing spirit" << std::endl;
		}
		//Win/Fail condition
		if (regi.health <= 0)
		{
			std::cout << "Regi is OUT" << std::endl;
		}
		if (wilson.health <= 0)
		{
			std::cout << "Wilson is OUT" << std::endl;
		}
		if (chris.health <= 0)
		{
			std::cout << "Chris is OUT" << std::endl;
		}
		if (matthew.health <= 0)
		{
			std::cout << "Matthew is OUT" << std::endl;
		}
		if (regi.health <= 0 && wilson.health <= 0)
		{
			std::cout << "TEAM NINJAS ARE DEFEATED" << std::endl;
			std::cout << "Ninja Tanks did not work this time..." << std::endl;
			break;
		}
		if (chris.health <= 0 && matthew.health <= 0)
		{
			std::cout << "TEAM ZOMBIES ARE DEFEATED" << std::endl;
			std::cout << "The undead are no more..." << std::endl;
			break;
		}

	}
	std::cout << "Input the next attack....." << std::endl;
	system("pause");
	//how i fight??
	return 0;
}