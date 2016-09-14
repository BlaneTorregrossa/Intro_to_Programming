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






#include <iostream>

//Struct for 5 individual players 
struct Player
{
	int score;
	char name;
};

//The function that lets the user input player name and score
int playerFunction()
{
	Player input;
	int playerLoop[5] = { 1, 2, 3, 4, 5 };
	std::cout << "Please decide on the score the player deserves..." << std::endl;
	std::cin >> input.score;
	system("cls");
	std::cout << "Please determine the player's name..." << std::endl;
	std::cin >> input.name;
	system("cls");
	std::cout << "Player Name: " << input.name << std::endl;
	std::cout << "Player Score: " << input.score << std::endl;
	system("pause");
	return 1;
}

//Need to figure out how to get the array to work with functions and loop
int main()
{
	std::cout << playerFunction();
	return 1;
}



