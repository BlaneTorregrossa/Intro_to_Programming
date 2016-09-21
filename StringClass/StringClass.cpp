

#include "StringClass.h"
#include <iostream>



int main()
{
	int i = 5;
	StringClassA stringclassa = StringClassA(7, 8);
	StringClassB stringclassb = StringClassB(8);
	stringclassa.ArrayCount;
	return 1;
}

StringClassA::StringClassA(char aa, char ab) //Function fors String class A
{

	ArrayA[7] = aa;
	nameA[8] = ab;
}



StringClassB::StringClassB(char ba) //Function for string class B
{
	nameB[8] = ba;
}






void StringClassA::ArrayCount() //Fuction for counting a strings length and returning a value
{
	strlen(ArrayA);
}




//I feel as if I am misinterpeting the instructions between the meaning of string and string class.
//I do not understand how to get two classes to swap information with or without pointers.
//I do not understand how to convert information and change it for a duplicate class.
//I do not understand how to make a sub-string within the string class.
//I am aware of functions string length, compare, and copy.


//StringClassB appending itself to StringClassA
StringClassB * StringClassA::findStringClassB()
{
	return nullptr;
}



//StringClassA appending itself to StringClassB
StringClassA * StringClassB::findStringClassA()
{
	return nullptr;
}



//I do not understand how to get two classes to interact with each other for comparison.
void StringClassA::StringCompare(int compareA)
{
	
}


