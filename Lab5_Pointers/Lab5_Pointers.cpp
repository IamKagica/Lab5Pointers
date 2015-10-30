// Lab5_Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int size;

void reverser(char myStr[])
{
	int start = 0;
	int end = size - 2;
	int fin = end / 2;
	std::cout << end << std::endl;
	char startToEnd;
	char endToStart;
	
	do
	{
		startToEnd = myStr[start];
		endToStart = myStr[end];
		myStr[start] = endToStart;
		myStr[endToStart] = startToEnd;
		start++;
		end--;

	} while (start < 2);
}

int main()
{
    // declare a char string to reverse

	char myString[] = "Hello World!";
	size = sizeof(myString) / sizeof(myString[1]);
	std::cout << size;

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
		char tem_char = *first-char;
		*first_char = *last_char;
		*last_char = temp_char;
		++first_char;

	}
*/