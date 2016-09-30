#include <iostream>
#include "MorngingWork.h"

int MorningFunction()
{
	int* m_pointing = 0;
	int m_Array[15];
	int m_Size = 0;

	m_pointing = &m_Array[15];


	while (m_Size != '\0')
	{
		++m_Array[m_Size];
		if (m_Array[15])
		{
			break;
		}
	}

	

	return m_Array[m_Size]; // Can't figure out how to return value that apeears the most in the array.


}

