//Description:: A function that takes three numbers and then multiplies the sum of the numbers by five.

#include <iostream>

int threeNumbers()
{
	int numA = 25;
	float numB = 2.896;
	float numC = 7.104;
	int sum;
	int finalResult;
	sum = numA + numB + numC;
	finalResult = sum * 5;
	std::cout << "The final result is " << finalResult << std::endl;
	system("pause");
}


