// Loops Exercise 1
#include <iostream>

int main()
{
	int bigHundred = 100;
	for (int i = 0; i <= bigHundred; i++)
	{
		std::cout << i << std::endl;
		if (i * 3)
		{
			printf("Fizz");
		}
	}
	system("pause");
	return 0;
}