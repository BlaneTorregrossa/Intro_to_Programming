//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.

//Function for StringClass
StringClass::StringClass(int a)
{
	name[7];
}

//*
//A function that determines the strings length and returns an interger.
int StringClass::StringCounter(int c)
{

	name[7];

	for (c = 0; c < 7; c++)
	{
		char temp = name[c];
		if (c == 6)
		{
			break;
		}
	}
	return name[c];
}


//*
//A funtion that accesses the second character in the string and returns it.
int StringClass::StringIndexAccess(int ia)
{
	name[7];

	for (ia = 0; ia < 7; ia++)
	{
		char temp = name[ia];
		if (ia == 2)
		{
			break;
		}
	}
	return name[ia];
}

//*
//This function is supposed to compare two strings together. Not sure if this is the right way for these to be compared though.
int StringClass::StringCompare(int ca, int cb)
{
	name[7];
	char tempForComparisonA = name[ca];
	char tempForComparisonB = name[cb];
	if (tempForComparisonA == tempForComparisonB)
	{
		ca = name[7];
	}
	if (tempForComparisonB != tempForComparisonA)
	{
		cb = name[7];
	}
	return ca;
	return cb;
}

//*
//This function is supposed to append one string to the end of another. Not sure if the string is even appended.
int StringClass::StringAppend(int saa)
{
	name[7];
	char nameDup[7] = "Extra";
	char nameNew[14];
	if (saa == 1) // Try using Loops.
	{

	}
	return nameNew[14];
}

//*
//This function is supposed to prepend the string duplicate to the original string. Not sure how to get one string to be placed before the other.
int StringClass::StringPrepend(int spa, int spb)
{
	name[7];
	char nameDup[7];
	for (spa = 0; spa < 7; spa++)
	{
		char tempa = name[spa];
		if (spa == 7)
		{
			nameDup[7] = name[7];

		}
	}
	return 0;
}

//*
//This function converts the normal string to be like the duplicate in that the string now contains all lowercase letters.
int StringClass::StringSmallDuplicate(int sd)
{

	name[7];
	char nameSmallDup[7] = "dummy";
	while (sd == 1)
	{
		name[7] = nameSmallDup[7];
		break;
	}
	return name[7];
}

//*
//This function converts the normal string to be like the duplicate in that the string now contains all uppercase letters.
int StringClass::StringBigDuplicate(int bd)
{
	name[7];
	char nameBigDup[7] = "DUMMY";
	while (bd == 1)
	{
		name[7] = nameBigDup[7];
		break;
	}

	return name[7];
}









//List questions and problems you do not understand.
