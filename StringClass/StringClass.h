//Comment what all this means...

#ifndef _StringClass_H_
#define _StringClass_H_
#include <iostream>
// This is where the prototyping of funtions happens...


class StringClass // Only one string class needed Will need to make multiple instances of this class.
{
private:
	char m_Data[255]; // Best left at 255. DO NOT CHANGE!
	int m_Size; // Do not set what this is equal up here!


public:
	StringClass();
	
	StringClass(char w[]);

	int Length();

	int Compare(char c[], int ci);

	

};

	 //Your class should only have one char array or char pointer.
	//You will pass into your functions after string classes in order to interact with the correct instance





#endif