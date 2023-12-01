// Taylor Stargell
// CIS 1202 101
// December 1, 2023

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototype
char character(char, int);

int main()
{
	try
	{
		try
		{
			cout << "character('a', 1) = ";
			cout << character('a', 1) << endl; // Returns 'b'

			cout << "character('a', -1) = ";
			cout << character('a', -1) << endl; // Throws an invalidRangeException
			
			cout << "character('Z', -1) = ";
			cout << character('Z', -1) << endl; // Returns 'Y'

			cout << "character('?', 5) = ";
			cout << character('?', 5) << endl; // Throws an invalidCharacterException
		}
		catch (string invalidCharacterException)
		{
			cout << invalidCharacterException;
		}
	}
		catch (string invalidRangeException)
		{
			cout << invalidRangeException;
		}
		return 0;
	}
char character(char start, int offset)
{
	if (!isalpha(start))
	{
		string invalidCharacterException = "ERROR: Invalid Character";
		throw invalidCharacterException;
	}
	if (!isalpha(start + offset))
	{
		string invalidRangeException = "ERROR: Invalid Range";
		throw invalidRangeException;
	}
	return start + offset;
}