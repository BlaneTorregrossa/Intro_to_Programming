#include "StringClass.h"
#include <iostream>


int main()
{
	StringClass sc("Testa"); //Proper way for this to work instead of StringClass String = StringClass(0);


	sc.Length();
	sc.Compare("Testa");
	sc.Append("ThisIsA");
	return 1;
}


