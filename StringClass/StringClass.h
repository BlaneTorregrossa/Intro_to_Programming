//Comment what all this means...

#ifndef _StringClass_H_
#define _StringClass_H_
#include <iostream>
// This is where the prototyping of funtions happens...


class StringClass // Only one string class needed Will need to make multiple instances of this class.
{
public:
	StringClass(int a);
	int StringCounter(int c);
	int StringIndexAccess(int ia);
	int StringCompare(int ca, int cb);
	int StringAppend(int saa);
	int StringPrepend(int spa, int spb);
	int StringSmallDuplicate(int sd);
	int StringBigDuplicate(int bd);

private:

	char name[7] = "Dummy"; //Your class should only have one char array or char pointer.
					//You will pass into your functions after string classes in order to interact with the correct instance
};




#endif