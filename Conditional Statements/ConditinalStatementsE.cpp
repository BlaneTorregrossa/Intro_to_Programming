// Conditinal Statements Exercise 1
//Description: If statement that makes x assigned to 100 if y equals 0

//#include <iostream>
//int main()
//{
//	int x;
//	int y = 0;

//	if (y == 0)
//	{
//		x = 100;
//		system("pause");
//		return 0;
//	}
	
//}

//Conditional Statements Exercise 2
//Description: Console asks for two numbers and displays which is the highest to the console unless they both are equal in value

//#include <iostream>
//int main()
//{
//	int a;
//	int b;
	
//	std::cout << "Type two numbers" << std::endl;
//	std::cin >> a >> b;

//	if (a > b)
//	{
//		std::cout << a << std::endl;
//	}
//	else if (a < b)
//	{
//		std::cout << b << std::endl;
//	}
//	else
//	{
//		std::cout << "Either both numbers were equal to each other or something went wrong" << std::endl;
//	}
//	system("pause");
//	return 0;
//}


//Comditional Statements Exercise 3
//Description:Takes five numbers and if the numbers have a positive sum it displays the numbers in ascending order and if the numbers are negative it does the opposite. If the sum equals zero it displays the numbers in the order they were entered.

//#include <iostream>

//int main()
//{
//	int sum;
//	int resulta;
//	int resultb;
//	int resultc;
//	int resultd;
//	int resulte;
//	int tmp;
//	std::cin >> resulta, resultb, resultc, resultd, resulte;
//		sum = resulta + resultb + resultc + resultd + resulte;
//		if (sum < 0)
//		{
//			std::cout << i << std::endl;
//		}
//		if (sum > 0)
//		{
//			std::cout << i << std::endl;
//		}
//		if (sum == 0)
//		{
//			std::cout << resulta, resultb, resultc, resultd, resulte;
//		}
//	system("pause");
//	return 0;
//}


//Conditinal Statements Exercise 4
//Description: A switch statement that asks for a number and displays the number back as long as it is 1-4. If not any of these numbers than it displays invald.
//#include <iostream>
//int main()
//{
//	int value;
//	std::cin >> value;
	 
//	switch (value)
//	{
//	case 1:
//		std::cout << "1";
//		break;
//	case  2:
//		std::cout << "2 or 3";
//		break;
//	case 3:
//		std::cout << "2 or 3";
//		break;
//	case 4:
//		std::cout << "4";
//		break;
//	default:
//		std::cout << "Invalid";
//	}
//	system("pause");
//	return 0;
//}


//Conditinal Statements Exercise 5
//A ternary operator made from an if statement
//#include <iostream>
//int main()
//{
//	int x;
//	int y;

//	y = (x == 0) ? 0 : 10;
//}


//Conditional Statements Exercise 6
//A switch operation that takes two numbers from the user followed by the numbers 1-5 to determine a Mathematical Operation Character. If evreything was input correctly the console should display the correct math of what was given.
//#include <iostream>
//int main()
//{
//	int numa;
//	int numb;
//	int numOperation;
//	std::cout << "Please give two numbers.";
//	std::cin >> numa >> numb;
//	std::cout << "Pleae give us one of the following using 1-5(+, -, *, /, %).";
//	std::cin >> numOperation;

//	switch (numOperation)
//	{
//	case 1:
//		std::cout << numa + numb << std::endl;
//		break;
//	case 2:
//		std::cout << numa - numb << std::endl;
//		break;
//	case 3:
//		std::cout << numa * numb << std::endl;
//		break;
//	case 4:
//		std::cout << numa / numb << std::endl;
//		break;
//	case 5:
//		std::cout << numa % numb << std::endl;
//		break;
//	default:
//		std::cout << "Mistakes were made to bring you these words." << std::endl;
//	}
//	system("pause");
//	return 0;
//}

//Conditional Statements Exercise 7
//Description: Switch statement that outputs how many days in a moth when given a number representing a month. If a value higher than 12 is given an error message is displayed.
//#include <iostream>
//int main()
//{
//	int jan = 31;
//	int feb = 28;
//	int mar = 31;
//	int apr= 30;
//	int may = 31;
//	int jun = 30;
//	int jul = 31;
//	int aug = 30;
//	int sep = 31;
//	int oct = 31;
//	int nov = 31;
//	int dec = 30;
//	int monthOfTheYear;

//	std::cout << "Type in 1-12 to select a mont and view the days it has." << std::endl << "Ex. (5 is May)" << std::endl;
//	std::cin >> monthOfTheYear;

//	switch (monthOfTheYear)
//	{
//	case 1:
//		std::cout << jan << " days in the month of Janurary." << std::endl;
//		break;
//	case 2:
//		std::cout << feb << " days in the month of Feburary." << std::endl;
//		break;
//	case 3:
//		std::cout << mar << " days in the month of March." << std::endl;
//		break;
//	case 4:
//		std::cout << apr << " days in the month of April." << std::endl;
//		break;
//	case 5:
//		std::cout << may << " days in the month of May." << std::endl;
//		break;
//	case 6:
//		std::cout << jun << " days in the month of June." << std::endl;
//		break;
//	case 7:
//		std::cout << jul << " days in the month of July." <<std::endl;
//		break;
//	case 8:
//		std::cout << aug << " days in the month of August." << std::endl;
//		break;
//	case 9:
//		std::cout << sep << " days in the month of September" << std::endl;
//		break;
//	case 10:
//		std::cout << oct << " days in the month of October" << std::endl;
//		break;
//	case 11:
//		std::cout << nov << " days in the month of Noveber" << std::endl;
//		break;
//	case 12:
//		std::cout << dec << " days in the month of December" << std::endl;
//		break;
//	default:
//		std::cout << "Mistakes were made when selecting the months. Make sure you used the numbers 1-12!" << std::endl;
//	}
//	system("pause");
//	return 0;
//}


//Conditional Statements Exercise 8

//#include <iostream>

//int main()
//{
//	bool flag = true;
//	int numPos = 35, numNeg = -55;
//	char frstChar = 'J', scndChar = 'O';
//	double frstPrice = 5.60;

//	numPos > numNeg;
//	frstChar > scndChar;
//	!(numPos + numNeg);
//	(numPos == -30) || (numNeg == -55);
//	(frstPrice >= 4.1) && (frstPrice <= 9.9);
//	!flag && (scndChar <= 'R');
//	(numPos < 66) | (flag && numPos > 35);
//	++numPos == 36;
//	numPos++ == 36;
//	(frstChar == 'j') || (frstChar == 'J');
//	system("pause");
//	return 0;
//}

// Conditional Statements Exercise 9
// Evaluation of given logical expresions where a is true and b is false.
//#include <iostream>

//int main()
//{
	//bool a = ture;
	//bool b = false;

//a.) (a || b) || (a && b)
// (True or False) or (True and False)
// This expression will work if true or false are active or if both true and false are active. 
//b.) !((!a) && (a)) || (a && b)
// Not((NotTrue) && (True)) || (True && False)
//This expression will work if true and false are active or if false and true are active. 
//c.) !((5 || a) || (!b)) && (!(a) && b)
//Not((True or True) or (NotFalse)) and (Not(True) and False)
//This expression will work if anything false or false are active or if false is active and true and false are active.
//d.) a || b && a
//True or False and True
//This expression will work if True or False and True are Active.
//e.) !a&&b
//NotTrueAndFalse
//This expression will work if False and True are active.
//}