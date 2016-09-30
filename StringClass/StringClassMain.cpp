#include "StringClass.h"
#include <iostream>


int main()
{
	StringClass sc; //Proper way for this to work instead of StringClass String = StringClass(0);


	sc.Length();
	sc.Compare("Test");
	sc.Append("Test");
	return 1;
}


