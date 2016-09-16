//Pointers to Memory 1

//#include <iostream>

//char c = 'T', d = 'S';
//char *p1 = &c;
//char *p2 = &d;
//char *p3;

//int main()
//{
//	p3 = &d;

//	std::cout << "*p3 = " << *p3 << std::endl;


//	p3 = p1;

//	std::cout << "*p3 = " << *p3;
//	std::cout << ", p3 = " << p3 << std::endl;

//	*p1 = *p2;

//	std::cout << "*p1 = " << *p1;
//	std::cout << ", p1 = " << p1 << std::endl;
//	system("pause");
//	return 1;
//}







//Pointers to Memory 2

//#include <iostream>

//int *p;
//int i;
//int k;


//int main()
//{
//	i = 42;
//	k = i;
//	p = &i;
//	std::cout << i << std::endl << k << std::endl << p << std::endl;
//	system("pause");
//	return 1;
//}

// Pointers to Memory 3


//D. *p is what led to i changing into 75


//Pointers to Memory 4
//Description: A pointer that doesn't work due to both being different types of varibles.

//char c = 'A';
//double *p = &c;


// Pointers to Memory 5 (Returning)
//#include <iostream>


//int main()
//{
//	char blocks[3] = { 'A', 'B', 'C' };
//	char *ptr = &blocks[0];
//	char temp;

//	temp = blocks[0];
//	temp = *(blocks + 2);
//	temp = *(ptr + 1);
//	temp = *ptr;

//	ptr = blocks + 1;
//	temp = *ptr;
//	temp = *(ptr + 1);

//	ptr = blocks;
//	temp = *++ptr;
//	temp = ++*ptr;
//	temp = *ptr++;
//	temp = *ptr;

//	return 0;
//}




// Pointers to Memory 6
//A.Write a function RevString(char* array) which reverses array. The function returns nothing.
//B.Write a function CountEven(int* array, int array_len) which receives an integer array and its size, and returns the number of even numbers in the array.
//C.Write a function Maximum(double* array, int array_size) that returns a pointer to the maximum value of an array of doubles.If the array is empty, return nullptr.
//D.Write a function Contains(char* array, char search_value) which returns true if the 1st parameter contains the 2nd parameter, or false otherwise.

#include <iostream>

int RevString(char* array)
{
	char revArray[3]{ 'A', 'B', 'C' };
	char* revPtr = &revArray[0];
	char revTemp;

	revTemp = revArray[0];
	revTemp = *(revArray + 1);
	revTemp = *(revPtr + 1);
	revTemp = *revPtr;


	revPtr = revArray + 1;
	revTemp = *revPtr;
	revTemp = *(revPtr + 1);

	revTemp = *++revPtr;
	revTemp = ++*revPtr;
	revTemp = *revPtr++;
	revTemp = *revPtr;



	return 0;

}

int main()
{
	int Reverse = RevString('A');
	system("pause");
}