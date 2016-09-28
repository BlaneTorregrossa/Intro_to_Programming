//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.

//Function for StringClass
StringClass::StringClass(int N)
{
	name[32] = N;
}


//A function that determines the strings length and returns an interger.
int StringClass::StringCounter(int c)
{

	name[32];


	for (c = 0; c < 6; c++)
	{
		char temp = name[c];
		if (c == 6)
		{
			return c;
			break;
		}
	}
}



//A funtion that accesses the second character in the string and returns it.
int StringClass::StringIndexAccess(int ia)
{
	name[32];

	for (ia = 0; ia < 6; ia++)
	{
		char temp = name[ia];
		if (ia == 2)
		{
			return ia;
			break;
		}
	}
}



int StringClass::StringCompare(int ca, int cb)
{
	name[32];
	char tempForComparisonA = name[32];
	char tempForCmoparisonB = name[32];
	ca = tempForComparisonA;
	cb = tempForCmoparisonB;
	if (ca == cb)
	{
		ca = name[32];
	}
	if (cb != ca)
	{
		cb = name[32];
	}
}



int StringClass::SmallStringDuplicate(int sx, int sy)
{
	name[32];
	char nameDup[32] = "dummy";
	char tempForSmallLetters = nameDup[32];
	char tempForNormalLettersA = name[32];
	int lettersX = tempForNormalLettersA;
	int lettersY = tempForSmallLetters;
	int lettersTemp;
	int swap = 1;
	while (swap == 1)
	{
		lettersTemp = lettersY;
		lettersY = lettersX;
		lettersX = lettersTemp;
	}
	return name[32];
}


int StringClass::BigStringDuplicate(int bx, int by)
{
	name[32];
	char nameDup[32] = "DUMMY";
	char tempForBigLetters = nameDup[32];
	char tempForNormalLetters = name[32];
	int lettersX = tempForNormalLetters;
	int lettersY = tempForBigLetters;
	int lettersTemp;
	int swap = 2;
	while (swap == 2)
	{
		lettersTemp = lettersY;
		lettersY = lettersX;
		lettersX = lettersTemp;
	}
	return name[32];
}


void StringClass::StringAppending()
{
	name[32];
	char nameAddition[32] = "ExtraWords";
	char holderA = name[32];
	char holderB = nameAddition[32];
	int holderAA = holderA;
	int holderBB = holderB;
	int attach = 3;
	while (attach == 3)
	{
		// holderAA + holderBB does not work as they do not contain modifiable values

	}
}


//List questions and problems you do not understand.
//Could a loop be used in the middle of an if statement.
//How do I make the intergers for the function assign correctly.
// Can not figure out why stringcounter is not working.