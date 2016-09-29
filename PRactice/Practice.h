#ifndef _Practice_H_
#define _Practice_H_
#include <iostream>




class StringClass // Only one string class needed Will need to make multiple instances of this class.
{
public:
	char nameAccess = name[7];
	StringClass(int a);
	int StringCounter(StringClass c);
	

private:

	char name[7] = "Dummy"; //Your class should only have one char array or char pointer.
							//You will pass into your functions after string classes in order to interact with the correct instance
};




#endif