// Author: Phillip Sin
// Date: 10/ 31/ 15
// Course: Computer Programming 2 (C++)
// Lab5_Pointers
// Teacher: Mr. Hansen

#include "stdafx.h"
#include <iostream>

int size;

void reverser(char * pointer)
{
	int start = 0;
	int end = strlen(pointer) - 1;
	char startToEnd;
	char endToStart;
	
	while(start < end)
	{
		startToEnd = * (pointer + end) ;
		endToStart = * (pointer + start);
		* (pointer + end) = endToStart;
		* (pointer + start) = startToEnd;
		start++;
		end--;

	}
}

int main()
{
    // declare a char string to reverse

	char  myString[] = "Hello World!";

	// call the reverser function
	reverser(myString);

	//output the result
	std::cout << myString << std::endl;

	std::system("PAUSE");
	return 0;
}

/*
void reverser(char * pointer)
{
	char * first_char = pointer;
	char * last_char = pointer + strlen(pointer);
	while (first_char = pointer < last_char)
	{
		--last_char;
		char temp_char = *first-char;
		*first_char = *last_char;
		*last_char = temp_char;
		++first_char;

	}
*/