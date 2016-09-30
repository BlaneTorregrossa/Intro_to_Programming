//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.

// Figure out problem with m_Size!!! This issue is preventing evreything else from running properly!!!



StringClass::StringClass() {}

// Function for Sting Class
StringClass::StringClass(char w[])
{
	m_Size = 0; //Parts like this is where you would assign this.
	while (w[m_Size] != '\0') //Activates loop while StringSize is not null 
	{
		m_Data[m_Size] = w[m_Size];
		m_Size++; // Increases array size
	}
	m_Data[m_Size] = '\0';
}

// Function for the Length of the string
int StringClass::Length()
{
	return m_Size;
}


// Function for comparing a string with the string class.
bool StringClass::Compare(StringClass c) // This function compares both strings to see if they are the same length. If they are, then the function compares if the strings have the same characters. If they do then it returns true. If the strings are different in length or the characters stored then false is returned.
{
	if (Length() != c.Length()) // Checks if the strings are both the same length. If they aren't it returns false. If they are it continues to the loop that follows.
		return false;
	for (int i = 0; i < m_Size; i++)
	{
		if (m_Data[i] != c.m_Data[i]) // Checks if the strings contain the same varibles. If they are the same the return is set to true while if they are not the same the return is set to false.
			return false;
	}
	return true;
}

// Function that needs looking at...
int StringClass::Append(StringClass a) // Function is suppossed to append two strings together.
{
	for (int iz = 0; iz < m_Size; iz++)
	{
		if (m_Data[iz] == a.m_Data[iz])
			a.m_Data[iz++];
		else if (m_Data[iz] != a.m_Data[iz])
			m_Data[iz++];
		if (iz == 8)
			return a.m_Data[iz];
	}
	return a.m_Data;
}


//List questions and problems you do not understand.
// m_size is not working correctly and is just staying there. Not sure what is causing the issue.
// Still trying to figure out how to properly get the append function to work as the way I currenty have it is wrong.
