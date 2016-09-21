

#include "StringClass.h"
#include <iostream>


// how to properly get char information into the main function without problems
int main()
{
	StringClassA stringclassa = StringClassA ('a', 'b');
	StringClassB stringclassb = StringClassB('c', 'd');
	

	system("pause");
	return 1;
}

StringClassA::StringClassA(char aa, char ab) //Function fors String class A
{
	ArrayA[7] = aa;
	nameA[8] = ab;
	nameADupA[8];
	nameADupB[8];
}



StringClassB::StringClassB(char ba, char bb) //Function for string class B
{

	ArrayB[7] = ba;
	nameB[8] = bb;
	nameBDupA[8];
	nameBDupB[8];
}


void StringClassA::ArrayCount() //string length
{
	strlen(ArrayA);
}


void StringClassA::CharIndex() //acsessing character index
{
	nameA[8];
}

//Comparison of a string to see if it is the same as another string classs

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



