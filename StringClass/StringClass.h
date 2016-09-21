//Comment what all this means...

#ifndef _StringClass_H_
#define _StringClass_H_
#include <iostream>

class StringClassA
{
public:
	StringClassA(char aa, char ab);
	void ArrayCount();
	void CharIndex();
	void DuplicateLowerCase();
	void DuplicateUpperCase();
	void Comparing();


private:
	
	char ArrayA[7];
	char nameA[8];
	char nameADupA[8];
	char nameADupB[8];
	char smallString[8];
	char bigString[8];
};



class StringClassB
{
public:
	StringClassB(char ba, char bb);
	

private:

	char ArrayB[7] = "sample";
	char nameB[8] = "StringB";
	char nameBDupA[8];
	char nameBDupB[8];
	char smallString[8] = "stringa";
	char bigString[8] = "STRINGA";
};



#endif