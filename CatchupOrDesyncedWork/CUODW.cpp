//Arrays 2


//#include <iostream>

//int main()
//{
//	int x = 2;
//	int values[] = { 2, 6, 10, 14};
//	std::cout << values[2] << std::endl; // Displays 10
//	std::cout << ++values[0] << std::endl; //Displays 3
//	std::cout << values[1]++ << std::endl; // Displays 6
//	std::cout << values[++x] << std::endl; // Displays 14
//	std::cout << values[4] << std::endl; //Displays huge negative number.
//	system("pause");
//	return 0;
//}


//Arrays 3 (needs to remove an error)

//#include <iostream>

//void main()
//{
//	int data[10]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//	for (int i = 10; i >= 0; i--)
//	{
//		std::cout << data[i] << std::endl;
//	}
//	system("pause");
//}


//Arrays 4 (needs to remove an error)

//#include <iostream>

//void main()
//{
//	int inputa;
//	int inputb;
//	int inputc;
//	int inputd;
//	int inpute;

//	std::cout << "Please input five numbers......" << std::endl;
//	std::cin >> inputa >> inputb >> inputc >> inputd >> inpute;

//	int inputData[5]{ inputa, inputb, inputc, inputd, inpute };
//	for (int i = 5; i >= 0; i--)
//	{
//		std::cout << inputData[i] << std::endl;
//	}
//	system("pause");
//}



//Arrays 5 (Returning)

//#include <iostream>

//void main()
//{
//	int inputa;
//	int inputb;
//	int inputc;
//	int inputd;
//	int inpute;
//	int inputf;
//	int inputg;
//	int inputh;
//	int inputi;
//	int inputj;

//	std::cout << "Please input ten numbers........." << std::endl;
//	std::cin >> inputa >> inputb >> inputc >> inputd >> inpute >> inputf >> inputg >> inputh >> inputi >> inputj;

//	int inputData[10]{ inputa, inputb, inputc, inputd, inpute, inputf, inputg, inputh, inputi, inputj };
//	for (int i = 10; i >= 0; i--)
//	{
		
//	}
//	system("pause");
//}




//Functions 1
//Description: Prints variables for each PrintInterger that is in the same scope which results in these numbers being printed in this order 1 1 2 2 3 2 1

//#include <iostream>

//void PrintInterger(int variable)
//{
//	std::cout << variable << std::endl;
//}

//int main()
//{
//	int the_variable = 1;
//	PrintInterger(the_variable);
//	{
//		PrintInterger(the_variable);
//		int the_variable = 2;
//		PrintInterger(the_variable);
//		{
//			PrintInterger(the_variable);
//			int the_variable = 3;
//			PrintInterger(the_variable);
//		}
//		PrintInterger(the_variable);
//	}
//	PrintInterger(the_variable);

//	system("pause");
//	return 0;
//}

//Functions 2

#include <iostream>

void FloatReturn(float variable)
{

}