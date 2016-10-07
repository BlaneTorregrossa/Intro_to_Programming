#include "StringClass.h"
#include <iostream>


int main()
{
	//Proper way for this to work instead of StringClass String = StringClass(0);
	StringClass firststring = StringClass("TestA"); // The first string 
	StringClass secondstring = StringClass("End"); // The second string 
	StringClass smallfirststring = StringClass("testaend"); // String for small string

	

	
	 secondstring.Length()  ;  // Finds length of the Second String
	 firststring.Length()  ;	 // Finds length of the First String




	 firststring.CharacterAccess(0)  ; // Accesses first character in the FirstString
	 firststring.Compare(secondstring)  ; // Compares length and characters of the firststring and the secondstring
	 std::cout << "print firststring append to secondstring "<< firststring.Append(secondstring).ReturnCStyle() <<"\n";  // Appends the secondstring to the firststring
	 secondstring.Prepend(firststring)  ; // Prepends the firststring to the secondstring
	 std::cout<<"print first string as c style string "<<firststring.ReturnCStyle()<<"\n";
	 firststring.SmallCharacters(smallfirststring);
	system("pause");
	
	return 0;
}


