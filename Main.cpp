#include <iostream>
#include <cstdlib>
#include "FunctionsPrototypes.h"

/*
* This CPP it the one that calls the others.It calls the function ShowMenu that calls all the others.
* Without the third inclusion "FunctionsPrototypes.h" this wouldn't work.
* It's necessary double quotes on the inclusion to tell the compiler to search for the additional H 
* file in the project path. Inclusions with <> look for the H files within the standard path of C++.
*/ 

int main()
{
	ShowMenu();
}

