#include "StringClass.h"
#include <iostream>


int main()
{
	StringClass String = StringClass(0);
	String.StringCounter(0);
	String.StringIndexAccess(0);
	String.StringCompare(32, 32);
	String.StringAppend(1);
	String.StringPrepend(0, 0);
	String.StringSmallDuplicate(1);
	String.StringBigDuplicate(1);
	system("pause");
}

 
