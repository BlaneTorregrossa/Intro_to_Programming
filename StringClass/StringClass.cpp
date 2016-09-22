

#include "StringClass.h"
#include <iostream>

//Prototype your functions...


StringClassA::StringClassA()
{
	int search;
	char ArrayA[] = "sample";
	char *ArrayAAcess[sizeof(ArrayA)]; 
	for (search = 0; search < sizeof(ArrayA); search++)
		ArrayAAcess[search] = &ArrayA[search];
	char nameA[] = "StringA";
	char nameADupA[] = "Dup";
	char nameADupB[] = "Dup2";
	char smallString[] = "stringa";
	char bigString[] = "STRINGA";
}

StringClassB::StringClassB()
{
	char ArrayB[] = "sample";
	char nameB[] = "StringB";
	char nameBDupA[] = "Dup";
	char nameBDupB[] = "Dup2";
	char smallString[] = "stringb";
	char bigString[] = "STRINGB";
}
// how to properly get char information into the main function without problems
int main()
{
	StringClassA stringclassa = StringClassA (1, 2);
	StringClassB stringclassb = StringClassB(3, 4);
	stringclassa.ArrayCount;

	system("pause");
	return 1;
}

StringClassA::StringClassA(int aa, int ab) //Function for String class A
{
	ArrayA;
	nameA;
}



StringClassB::StringClassB(int ba, int bb) //Function for string class B
{

	ArrayB;
	nameB;
}


void StringClassA::ArrayCount() //string length
{
	std::cout << strlen(ArrayA);

}


void StringClassA::CharIndex() //acsessing character index
{
	nameA[8];
}

//Comparison of a string to see if it is the same as another string classes. Try using duplicators.
void StringClassA::Comparing()
{
	
}


//Apenindng a string

//Prepending a string

//Reurning a string ias a basic constant C-style string


void StringClassA::DuplicateLowerCase() // convert the string to a duplicate containng all lowercase letters
{
	strcpy_s(nameADupA, nameA);
	if (strcmp(nameADupA, nameA) == 0)
	{
		strcpy_s(nameADupA, smallString);
	}
}

void StringClassA::DuplicateUpperCase() // convert the string to a duplicate containing all uppercase letters
{
	strcpy_s(nameADupB, nameA);
	if (strcmp(nameADupB, nameA) == 0)
	{
		strcpy_s(nameADupB, bigString);
	}
}


// finding a sub-string within the string class starting from a certain index within the string

// set the string to an input C-style string






//I feel as if I am misinterpeting the instructions between the meaning of string and string class.
//I do not understand how to get two classes to swap information with or without pointers.
//I do not understand how to convert information and change it for a duplicate class.
//I do not understand how to make a sub-string within the string class.
//I am aware of functions string length, compare, and copy.



