// Loops Exercise 1

//Description: Prints the numbers 0-100 backwards
//#include <iostream>
//int main()
//{
	//	for (int i = 100; i >= 0; i--)
	//	{
	//		std::cout << i << std::endl;
	//	}
	//	system("pause");
	//	return 0;
//}

//Description: Prints the numbers 0-99 backwards
//#include <iostream>
//int main()
//{
	//for (int i = 99; i >= 0; i--)
	//{
	//	std::cout << i << std::endl;
	//}
	//system("pause");
	//return 0;
//}

//Description: Prints out the numbers 1-100 backwards
//#include <iostream>
//int main()
//{
//	for (int i = 100; i > 0; i--)
//	{
//		std::cout << i << std::endl;
//	}
//	system("pause");
//	return 0;
//}

//Description: Prints the numbers 1-99 backwards without any that are divisible by 2
//#include <iostream>
//int main()
//{
//	for (int i = 100; i >= 0; i--)
//	{
//		if (i % 2)
//		{
//			std::cout << i - 0 << std::endl;
//		}		
//	}
//	system("pause");
//	return 0;
//}

// Loops Exercise 2
// Description: Prints out numbers 0-100, Prints fizz with each multiple of 3, Buzz for each multiple of 5, and FizzBuzz if a number is a multiple of 3 and 5.

//#include <iostream>
//int main()
//{
//	int bigHundred = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			std::cout << i << "FizzBuzz" << std::endl;
//		}
//		else if (i % 3 == 0)
//		{
//			std::cout << i << "Fizz" << std::endl;
//		}
//		else if (i % 5 == 0)
//		{
//			std::cout << i << "Buzz" << std::endl;
//		}
//		else
//		{
//			std::cout << i << std::endl;
//		}
//	}
//	system("pause");
//	return 0;
//}



// Loops Exercise 3
//Description: Loads numbers 0-1000 that are multiples of 3 or 5 and adds them together which is displayed at the end of the list.


//#include <iostream>
//int main()
//{
//	int bigThousand = 0;
//	int tmp;
//	int tmp2;
//	int prevResult = 0;
//	for (int i = 0; i <= 1000; i++)
//		{
//			if (i % 3 == 0 || i % 5 == 0)
//			{
//				std::cout << i << std::endl;
//				tmp = i;
//				tmp2 = tmp;
//				bigThousand = tmp2 + prevResult;
//				prevResult = bigThousand;
//			}
//		}
//	std::cout << bigThousand << std::endl;
//	system("pause");
//	return 0;
//}



//Exercise 4

//Description: Prints the numbers 0-100 backwards
//#include <iostream>
//int main()
//{
//	int i = 101;
//	while (i > 0)
//	{
//		i--;
//		std::cout << i << std::endl;
//	}
//	system("pause");
//	return 0;
//}

//Description: Prints the numbers 0-99 backwards
//#include <iostream>
//int main()
//{
//	int i = 100;
//	while (i > 0)
//	{
//		i--;
//		std::cout << i << std::endl;
//	}
//	system("pause");
//	return 0;
//}

//Description: Prints out the numbers 1-100 backwards
//#include <iostream>
//int main()
//{
//	int i = 101;
//	while ( i > 1)
//	{
//		i--;
//		std::cout << i << std::endl;
//	}
//	system("pause");
//	return 0;
//}

//Description: Prints the numbers 1-99 backwards without any that are divisible by 2
//#include <iostream>
//int main()
//{
//	int i = 101;
//	while (i > 0)
//	{
//		i--;
//		if (i % 2)
//		{
//			std::cout << i - 0 << std::endl;
//		}		
//	}
//	system("pause");
//	return 0;
//}

// Description: Prints out numbers 0-100, Prints fizz with each multiple of 3, Buzz for each multiple of 5, and FizzBuzz if a number is a multiple of 3 and 5.
//#include <iostream>
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			std::cout << i << "FizzBuzz" << std::endl;
//			i++;
//		}
//		else if (i % 3 == 0)
//		{
//			std::cout << i << "Fizz" << std::endl;
//			i++;
//		}
//		else if (i % 5 == 0)
//		{
//			std::cout << i << "Buzz" << std::endl;
//			i++;
//		}
//		else
//		{
//			std::cout << i << std::endl;
//			i++;
//		}
//	}
//	system("pause");
//	return 0;
//}

//Description: Loads numbers 0-1000 that are multiples of 3 or 5 and adds them together which is displayed at the end of the list.

//#include <iostream>
//int main()
//{
//	int bigThousand = 0;
//	int tmp;
//	int tmp2;
//	int prevResult = 0;
//	int i = 0;
//	while (i < 1000)
//		{
//		i++;
//			if (i % 3 == 0 || i % 5 == 0)
//			{
//				tmp = i;
//				tmp2 = tmp;
//				bigThousand = tmp2 + prevResult;
//				prevResult = bigThousand;
//				std::cout << i << std::endl;
//			}
//		}
//	std::cout << bigThousand << std::endl;
//	system("pause");
//	return 0;
//}