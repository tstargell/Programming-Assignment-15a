// Taylor Stargell
// CIS 1202 101
// December 1, 2023

#include <iostream>
#include <string>
using namespace std;

// Function prototype
char character(char, int);

int main()
{

	try
	{
		cout << character('a', 1) << endl; // Returns 'b'
		cout << character('a', -1) << endl; // Throws an invalidRangeException
		cout << character('Z', -1) << endl; // Returns 'Y'
		cout << character('?', 5) << endl; // Throws an invalidCharacterException
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException)
	{
		cout << invalidRangeException;
	}

	return 0;
}

char character(char start, int offset)
{
	if (start)
	{
		string invalidCharacterException = "ERROR: Invalid character";
		throw invalidCharacterException;
	}
	if (target)
	{
		string invalidRangeException = "ERROR: Invalid range";
		throw invalidRangeException;
	}
	return start & offset;
}