
#pragma once 
//Use this for header files.
//Do not put #include <iostream> here.


// This is where the prototyping of funtions happens...


class StringClass
{
private:
	char m_Data[255]; // Best left at 255. DO NOT CHANGE!
	int m_Size; // Do not set what this is equal up here!


public:
	StringClass() {};

	StringClass(char string[])
	{
		for (int i = 0; i < 255; i++)
		{
			m_Data[i] = string[i];
		}
	}

	int Length();

	char CharacterAccess(int i);

	bool Compare(StringClass c);

	char Append(StringClass a);

	char Prepend(StringClass p);

	const char* ReturnCStyle();
};






