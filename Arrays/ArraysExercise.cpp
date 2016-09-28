//Arrays 1

//#include <iostream>

//int main()
//{
//int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //Valid
//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; //Invalid as the declared array size is too small to fit in all given values
//double radii[10] = (3.2, 4.7} //Invalid due to a parenthesis being closed with a bracket. 
//int table[7] = { 2, , , 27, , 45, 39 }; // Invalid due to missing expressions.
//char codes[] = { 'A', 'X', '1', '2', 's' }; //Valid
//int blanks[]; //Invalid due to array size being undeclared and nothing being stored in array.
//int collection[-20]; //Invalid due to array size being less than zero
//int hours[3] = 8, 12, 16; //Invalid tdue to lack of parenthesis
//system("pause");
//return 0;
//}


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


//Arrays 3 
//Description: Array that is initialized by a loop.
//#include <iostream>

//void main()
//{
//	int data[10]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

//	for (int i : data)
//	{
//		std::cout << i << std::endl;
//	}
//	system("pause");
//}


//Arrays 4
//Description: Asks for five numbers for input and puts them in reverse order.

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
//	for (int i = 4; i > -1; i--)
//	{
//		std::cout << inputData[i] << std::endl;
//	}
//	system("pause");
//}



//Arrays 5 
//Description Stores 10 numbers in an array and displays the numbers of highest and lowest value.
//#include <iostream>

//void main()
//{
//	int inputa;
//	int inputb;
//	int inputc;
//	int inputd;
//	int inpute;
//	int inputf;
//int inputg;
//int inputh;
//int inputi;
//int inputj;
//int greatestvalue;

//	std::cout << "Please input ten numbers........." << std::endl;
//std::cin >> inputa >> inputb >> inputc >> inputd >> inpute >> inputf >> inputg >> inputh >> inputi >> inputj;

//	int inputData[10]{ inputa, inputb, inputc, inputd, inpute, inputf, inputg, inputh, inputi, inputj };
//for (int i : inputData)
//{
//	if (inputa > inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inputa;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputb > inputa && inputc && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inputb;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputc > inputa && inputb && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inputc;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputd > inputa && inputb && inputc && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inputd;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inpute > inputa && inputb && inputc && inputd && inputf && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inpute;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputf > inputa && inputb && inputc && inputd && inpute && inputg && inputh && inputi && inputj)
//	{
//		greatestvalue = inputf;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputg > inputa &&inputb && inputc && inputd && inpute && inputf && inputh && inputi && inputj)
//	{
//		greatestvalue = inputg;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputh > inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputi && inputj)
//	{
//		greatestvalue = inputh;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputi > inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputj)
//	{
//		greatestvalue = inputi;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputj > inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputi)
//	{
//		greatestvalue = inputj;
//		std::cout << greatestvalue << "is the greatest value!" << std::endl;
//	}
//	if (inputa < inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		std::cout << inputa << "is the smallest value!" << std::endl;
//	}
//	if (inputb < inputa && inputc && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		std::cout << inputb << "is the smallest value!" << std::endl;
//	}
//	 if (inputc < inputa && inputb && inputd && inpute && inputf && inputg && inputh && inputi && inputj)
//	{
//		std::cout << inputc << "is the smallest value!" << std::endl;
//	}
//	 if (inputd < inputa && inputb && inputc && inpute && inputf && inputg && inputh && inputi && inputj)
//		{
//		std::cout << inputd << "is the smallest value!" << std::endl;
//	}
//	 if (inpute < inputa && inputb && inputc && inputd && inputf && inputg && inputh && inputi && inputj)
//	{
//		std::cout << inpute << "is the smallest value!" << std::endl;
//	}
//	 if (inputf < inputa && inputb && inputc && inputd && inpute && inputg && inputh && inputi && inputj)
//	{
//		std::cout << inputf << "is the smallest value!" << std::endl;
//	}
//	 if (inputg < inputa &&inputb && inputc && inputd && inpute && inputf && inputh && inputi && inputj)
//	{
//		std::cout << inputg << "is the smallest value!" << std::endl;
//	}
//	 if (inputh < inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputi && inputj)
//	{
//		std::cout << inputh << "is the smallest value!" << std::endl;
//	}
//	 if (inputi < inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputj)
//	{
//		std::cout << inputi << "is the smallest value!" << std::endl;
//	}
//	 if (inputj < inputa && inputb && inputc && inputd && inpute && inputf && inputg && inputh && inputi)
//	{
//		std::cout << inputj << "is the smallest value!" << std::endl;
//	}
//}
//system("pause");
//}


//Arrays 6
//Description: Displays a 2d Array in a 3x3 dsiplay.

//#include <iostream>

//int main()
//{
//	int map[3][3] = { { 5, 10, 15}, 
//					{ 20, 25, 30}, 
//					{ 35, 40, 45} };
//	int rowa = 0, cola = 0, rowb = 1, colb = 1, rowc = 2, colc = 2;
//	std::cout << "2d rray is presented below!!!" << std::endl;
//	std::cout << "________________________" << std::endl << "------------------------" << std::endl << "________________________" << std::endl;
//	std::cout << map[rowa][cola] << "||||" << map[rowa][colb] << "||||" <<  map[rowa][colc] << std::endl;
//	std::cout << "________________________" << std::endl << "------------------------" << std::endl << "________________________" << std::endl;
//	std::cout << map[rowb][cola] << "||||" << map[rowb][colb] << "||||" << map[rowb][colc] << std::endl;
//	std::cout << "________________________" << std::endl << "------------------------" << std::endl << "________________________" << std::endl;
//	std::cout << map[rowc][cola] << "||||" << map[rowc][colb] << "||||" << map[rowc][colc] << std::endl;
//	std::cout << "________________________" << std::endl << "------------------------" << std::endl << "________________________" << std::endl;
//	system("pause");
//	return 0;
//}



//Arrays 7


//#include <iostream>
//int main()
//{
//	int days[29][5] = { { 5, 0, 15, 20, 25},
//						{ 0, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25},
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25},
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25},
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25},
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 },
//						{ 5, 10, 15, 20, 25 } };

//	int rowa = 0, row = 1, rowc = 2, rowd = 3, rowda = 4, rowe = 5, rowf = 6, rowg = 7, rowh = 8, rowi = 9, rowj = 10, rowk = 11, rowl = 12, rowm = 13, rown = 14, rowo = 15, rowp = 16, rowr = 17, rows = 18, rowt = 19, rowu = 20, rowv = 21, roww = 22, rowx = 23, rowy = 24, rowz = 25, rowza = 26, rowzb = 27, rowzc = 28, rowzd = 29, cola = 0, colb = 1, colc = 2, cold = 3, cole = 4;
//	std::cout << "All the rows sums " << days[rowa][colb] + days[row][colb] + days[rowc][colb] + days[rowd][colb] + days[rowda][colb] + days[rowe][colb] + days[rowf][colb] + days[rowg][colb] + days[rowh][colb] + days[rowi][colb] + days[rowj][colb] + days[rowk][colb] + days[rowl][colb] + days[rowm][colb] + days[rown][colb] + days[rowo][colb] + days[rowp][colb] + days[rowr][colb] + days[rows][colb] + days[rowt][colb] + days[rowu][colb] + days[rowv][colb] + days[roww][colb] + days[rowx][colb] + days[rowy][colb] + days[rowz][colb] + days[rowza][colb] + days[rowzb][colb] + days[rowzc][colb] + days[rowzd][colb] << std::endl;
//	std::cout << "All the columns sums " << days[row][cola] + days[row][colb] + days[row][colc] + days[row][cold] + days[row][cole] << std::endl;
//	system("pause");
//	return 0;
//}

