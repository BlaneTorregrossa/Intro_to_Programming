//This is where all your functions go.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.


StringClass::StringClass(int N)
{
	name[32] = N;
}


//At first wouldn't accept int as working until I retyped it. Not sure about what caused this to happen.
int StringClass::StringCounter(int Count)
{
	name[32] = Count;
	if (name[32] == Count) // Is this if statement even necessary?
	{
	// Come up with a loop to count the strings lemgth 
	}

}






//List questions and problems you do not understand.
//Are both .cpp files aware of each other and the header? What is the order in which these files interact.
//could a loop be used in the middle of an if statement.
//How do I make the intergers for the function assign correctly.