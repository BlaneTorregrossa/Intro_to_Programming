//This is all a mess. Fix this when you get home.
#include <iostream>

struct Player
{
	int turns = 0;
	bool win;
};

struct Opponent
{
	int turns = 0;
	bool win;
};

int ttcmap[3][3]{ { 1, 2, 3},
				{ 4, 5, 6},
				{ 7, 8, 9} };




int main()
{
	char input = '0';
	std::cout << "Test to see if things will work correctly." << std::endl;
	system("pause");
	system("cls");
	std::cout << "Please input x" << std::endl;
	std::cin >> input;
	while (input != 'x')
	{

		//All of these if statements are wrong!
		if (input == 'a')
		{
			std::cout << "top left" << std::endl;
			std::cin >> input;
		}
		if (input == 'b')
		{
			std::cout << "top middle" << std::endl;
			std::cin >> input;
		}
		if (input == 'c')
		{
			std::cout << "top right" << std::endl;
			std::cin >> input;
		}
		if (input == 'd')
		{
			std::cout << "middle right" << std::endl;
			std::cin >> input;
		}
		if (input == 'e')
		{
			std::cout << "true middle" << std::endl;
			std::cin >> input;
		}
		if (input == 'f')
		{
			std::cout << "middle left" << std::endl;
			std::cin >> input;
		}
		if (input == 'g')
		{
			std::cout << "bottom right" << std::endl;
			std::cin >> input;
		}
		if (input == 'h')
		{
			std::cout << "bottom middle" << std::endl;
			std::cin >> input;
		}
		if (input == 'i')
		{
			std::cout << "bottom right" << std::endl;
			std::cin >> input;
		}
		else
		{
			std::cout << "All is wrong..." << std::endl;
			system("pause");
			break;
		}
		system("pause");
	}
	return 1;





}