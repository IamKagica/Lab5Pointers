#include "stdafx.h"
#include "Driver.h"
#include <string>
#include <iostream>

Driver::Driver()
{

}

void Driver::reverser(char * pointer)
{
	int start = 0;
	int end = strlen(pointer) - 1;
	char startToEnd;
	char endToStart;

	while (start < end)
	{
		startToEnd = *(pointer + end);
		endToStart = *(pointer + start);
		*(pointer + end) = endToStart;
		*(pointer + start) = startToEnd;
		start++;
		end--;

	}
}

int Driver::main()
{
	// declare a char string to reverse

	char  myString[] = "Hello world!";

	std::cout << myString << std::endl;

	// call the reverser function
	reverser(myString);

	//output the result
	std::cout << myString << std::endl;

	std::system("PAUSE");
	return 0;
}
