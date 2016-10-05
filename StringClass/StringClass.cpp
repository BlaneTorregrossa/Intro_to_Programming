//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// Note that all the stuff that is collapsed works an should not be changed.

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.


StringClass::StringClass() {}


StringClass::StringClass(char w[]) //Function for String Class
{
	m_Size = 0; //Giving the array size a value.
	while (w[m_Size] != '\0') //Activates loop while StringSize is not set to null. 
	{
		m_Data[m_Size] = w[m_Size]; // assigns one string's size to be the same as another.
		m_Size++; // Increases array size
	}
	m_Data[m_Size] = '\0';
}

// Function for the Length of the string
int StringClass::Length()
{
	return m_Size; // Returns the size of a string that was defined in the previous function.
}


// Function for comparing a string with the string class.
bool StringClass::Compare(StringClass c) //This function compares both strings to see if they are the same length. If they are, then the function compares if the strings have the same characters. If they do then it returns true. If the strings are different in length or the characters stored then false is returned.
{
	if (Length() != c.Length()) // Checks if the strings are both the same length. If they aren't, it returns false. If they are, it continues to the loop.
		return false;
	for (int i = 0; i < m_Size; i++) // A for loop that enters increases the size of the two strings until they equal the value of m_size.
	{
		if (m_Data[i] != c.m_Data[i]) // Checks if the strings contain the same varibles. If they are the same the return is set to true while if they are not the same the return is set to false.
			return false;
	}
	return true;
}

//Places one string after another string
int StringClass::Append(StringClass a) //Problem 1
{
	char appendTemp; // Needs to be an array.
	while (a.m_Data[m_Size] != '/0')
	{
		appendTemp = m_Data[m_Size] + a.m_Data[m_Size];  //This does not work! This needs to properly append. 
	}
	return appendTemp;
}




/*
Problem 1: Under a while loop I am trying to increase the size of the string to then combine both strings together.


*/
