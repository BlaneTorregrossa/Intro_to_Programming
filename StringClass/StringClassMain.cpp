#include "StringClass.h"
#include <iostream>


int main()
{

	StringClass secondstring = StringClass("TestA"); //Proper way for this to work instead of StringClass String = StringClass(0);
	StringClass firststring = StringClass("End");

	

	
	std::cout << secondstring.Length() << std::endl;
	std::cout << firststring.Length() << std::endl;




	std::cout << firststring.CharacterAccess(0) << std::endl;
	std::cout << firststring.Compare(secondstring) << std::endl;
	std::cout << firststring.Append(secondstring) << std::endl;
	std::cout << secondstring.Prepend(firststring) << std::endl;
	system("pause");
}


