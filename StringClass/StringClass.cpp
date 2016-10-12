//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.





// Function for the Length of the string
int StringClass::Length()
{
	int i = 0;
	while (m_Data[i] != 0)
	{
		i++;
	}


	return i;
}

//Accesses a chosen character in a string
char StringClass::CharacterAccess(int i)
{
	return m_Data[i];
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
StringClass StringClass::Append(StringClass a)
{
	int l = Length();
	int t = 0;
	while (a.m_Data[t] != 0)
	{
		m_Data[l] = a.m_Data[t];
		l++;
		t++;
	}
	m_Data[l] = '\0';
	StringClass sc = StringClass(m_Data);
	return sc;
}

//Places one string before another string
StringClass StringClass::Prepend(StringClass p)
{
	int l = Length();
	int t = 0;
	while (p.m_Data[t] != 0)
	{
		m_Data[l] = p.m_Data[t];
		++t;
		l++;
	}
	m_Data[t] = '\0';
	StringClass sc = StringClass(m_Data);
	return sc;
}


//Returns a string as a basic C-Style string.
const char* StringClass::ReturnCStyle()
{
	const char* newData = m_Data;
	return newData;
}

StringClass StringClass::SmallCharacters(StringClass s)
{
	int l = Length();
	int a = 0;
	while (s.m_Data != 0)
	{
		m_Data[l] = s.m_Data[a]; // Find a way to remove the letters that the string already has.
		l--;
		if (l < 1)
			while (a != 8)
			{
				l++;
				a++;
				if (a = 8)
					break;
			}
	}
	m_Data[l] = '/0';
	StringClass sc = StringClass(m_Data);
	return sc;
}

/*

Make sure comments explain what evreything does.

*/
