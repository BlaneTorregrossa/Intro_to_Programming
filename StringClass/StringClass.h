//Comment what all this means...

#ifndef _StringClass_H_
#define _StringClass_H_
#include <iostream>
// This is where the prototyping of funtions happens...


class StringClass // Only one string class needed Will need to make multiple instances of this class.
{
public:
	StringClass(int a);
	int StringCounter(int Count);

	


private:
	
	char name[32] = "String"; //Your class should only have one char array or char pointer.
					//You will pass into your functions after string classes in order to interact with the correct instance
};




#endif