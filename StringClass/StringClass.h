

#ifndef _StringClass_H_
#define _StringClass_H_
#include <iostream>

//The first of two string classes
//Contains an Array counter, two arrays, and a way to interact with StringClassB.
class StringClassA
{
public:
	StringClassA(char aa, char ab);
	void ArrayCount();
	void StringCompare(int compareA);
	StringClassB* findStringClassB();
	



private:
	StringClassB* B;
	char ArrayA[7] = "sample";
	char nameA[8] = "stringA";
};



//The second string class
//Contains a single Array and a way to interact with StringClassA
class StringClassB
{
public:
	StringClassB(char ba);
	StringClassA* findStringClassA();

private:
	StringClassA* A;
	char nameB[8] = "StringB";
	
};
#endif