//Structures 1
//Description: Structure for a player's score, health, position, and velocity. Structure for a 2D rectangle where the position for four points are and it's color are determined.

//struct Player
//{
//	char playerName;
//	int playerHealth = 100;
//	int playerScore = 0;
//	float playerPositionX = 10.22;
//	float playerPositionY = 3.75;
//	float playerVelocity = 2.5;
//};

//struct Rectangle
//{
//	float pointAPosX = 65.221;
//	float pointAPosY = 10.231;
//	float pointBPosX = 50.221;
//	float pointBPosY = 6.352;
//	float pointCPosX = 25.981;
//	float pointCPosY = 2.351;
//	float pointDPosX = 58.261;
//	float pointDPosY = 8.221;
//	int color = 569064;
//};



//#include <iostream>
//Structures 3 
//struct Player
//{
//	int score;
//	char name;
//};


//int playerFunction()
//{
//	Player input;

//	std::cout << "Please decide on the score the player deserves..." << std::endl;
//	std::cin >> input.score;
//	system("cls");
//	std::cout << "Please determine the player's name..." << std::endl;
//	std::cin >> input.name;
//	system("cls");
//	std::cout << "Player Name: " << input.name << std::endl;
//	std::cout << "Player Score: " << input.score << std::endl;
//	system("pause");
//	return 1;
//}


//int main()
//{
//	std::cout << playerFunction();
//	return 1;
//}





//Structures 4 (Return to this)

//#include <iostream>

//Struct for 5 individual players 
//struct Player
//{
//	int score;
//	char name;
//};

//The function that lets the user input player name and score
//int playerFunction()
//{
//	Player input;
//	int playerLoop[5] = { 1, 2, 3, 4, 5 };
//	std::cout << "Please decide on the score the player deserves..." << std::endl;
//	std::cin >> input.score;
//	system("cls");
//	std::cout << "Please determine the player's name..." << std::endl;
//	std::cin >> input.name;
//	system("cls");
//	std::cout << "Player Name: " << input.name << std::endl;
//	std::cout << "Player Score: " << input.score << std::endl;
//	system("pause");
//	return 1;
//}

//Need to figure out how to get the array to work with functions and loop
//int main()
//{
//	std::cout << playerFunction();
//	return 1;
//}



// Structures 6

#include <iostream>

struct Store
{
	int gold = 500;
};


//Struct for items.
struct Items
{
	int itemName;
	int itemCost;
	int itemStock;
};


//The items that are avalible in the shop's stock (needs to be an array).
int itemsStocked(Items &IA, Items &IB, Items &IC)
{
	IA.itemStock = 25;
	IB.itemStock = 15;
	IC.itemStock = 5;
	return 0;
}

//To allow the user to change the price of the items.
int priceChange(Items &IA, Items &IB, Items &IC)
{
	char input = '0';
	if (input == 'u')
	{
		std::cin >> input;
		if (input == 'a')
		{
			IA.itemCost + 5;
			std::cout << "new price is: " << IA.itemCost << std::endl;
		}
		if (input == 'b')
		{
			IB.itemCost + 5;
			std::cout << "new price is: " << IB.itemCost << std::endl;
		}
		if (input == 'c')
		{
			IC.itemCost + 5;
			std::cout << "new price is: " << IC.itemCost << std::endl;
		}
	}
	if (input == 'd')
	{
		std::cin >> input;
		if (input == 'a')
		{
			IA.itemCost - 5;
			std::cout << "new price is: " << IA.itemCost << std::endl;
		}
		if (input == 'b')
		{
			IB.itemCost - 5;
			std::cout << "new price is: " << IB.itemCost << std::endl;
		}
		if (input == 'c')
		{
			IC.itemCost - 5;
			std::cout << "new price is: " << IC.itemCost << std::endl;
		}
	}
	return 1;
}

//Allow the user to use gold to to add items.
int buyItems(Items &IA, Items &IB, Items & IC, Store &S)
{
	char input = '0';
	std::cin >> input;
	if (input == 'a')
	{
		IA.itemStock + 1;
		S.gold - 5;
	}
	if (input == 'b')
	{
		IB.itemStock + 1;
		S.gold - 10;
	}
	if (input == 'c')
	{
		IC.itemStock + 1;
		S.gold - 25;
	}


}

//Allow the user to gain gold by selling items.
int sellItems(Items &IA, Items &IB, Items & IC, Store &S)
{
	char input = '0';
	std::cin >> input;
	if (input == 'a')
	{
		IA.itemStock - 1;
		S.gold + 5;
	}
	if (input == 'b')
	{
		IB.itemStock - 1;
		S.gold + 10;
	}
	if (input == 'c')
	{
		IC.itemStock - 1;
		S.gold + 25;
	}



}
