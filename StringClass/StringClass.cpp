//This is where all your functions go.
// Do not overthink this stuff.

#include "StringClass.h"
#include <iostream>

// You are not to use string functions C++ provides, such as strcmp, strlen, strcpy, etc., The purpose of the assesment is to mimic these functions.

//Function for StringClass


StringClass::StringClass() {}

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

int StringClass::Length()
{
	return m_Size;
}



// Has to use a loop to check arrays both at the SAME time and break when they are no longer the same.
int StringClass::Compare(char c[], int ci)
{
	c[m_Size];
	m_Data[m_Size];
	while (c[m_Size] == m_Data[m_Size])
	{
		++m_Size;

	}
}



//List questions and problems you do not understand.
