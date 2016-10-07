#include "StringClass.h"
#include <iostream>


int main()
{
	//Proper way for this to work instead of StringClass String = StringClass(0);
	StringClass firststring = StringClass("TestA"); // The first string 
	StringClass secondstring = StringClass("End"); // The second string 

	

	
	 secondstring.Length()  ;  // Finds length of the Second String
	 firststring.Length()  ;	 // Finds length of the First String




	 firststring.CharacterAccess(0)  ; // Accesses first character in the FirstString
	 firststring.Compare(secondstring)  ; // Compares length and characters of the firststring and the secondstring
	 firststring.Append(secondstring)  ; // Appends the secondstring to the firststring
	 secondstring.Prepend(firststring)  ; // Prepends the firststring to the secondstring
	 firststring.ReturnCStyle  ; 
	system("pause");
}


