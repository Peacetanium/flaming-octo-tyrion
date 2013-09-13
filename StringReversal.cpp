/*
A proof of concept program by B.T. Coyne (Il desdichado)
This program reverses an input string
*/
#include <string>
#include <iostream>

int main()
{
	/*  Add individual members of the header files to our global namespace
		This lets us use the terms declared below without prefacing with std::
		Some tutorials use 'using namespace std' which adds everything from the
		stdlib to the global namespace...this is really bad form we should avoid */
	using std::string;
	
	// Declare string variables, vector variable
	string obverse_string; // String as input
	string reverse_string = ""; // Concatenated reversed string

	// Solicit  and process input from user
	std::cout << "\nPlease enter a single word to be reversed.\n";
	std::getline(std::cin, input); // Take whole line instead of single word
	// std::cin >> obverse_string;
	std::cout << "You typed \"" << obverse_string << "\"\n";
	system("PAUSE");

	// Iterate backwards through the string, taking chars in reverse order
	int length = obverse_string.length();
	int i;
	for (i = length - 1; i > -1; i--)
	{
		reverse_string += obverse_string[i];
		std::cout << i << "th char is " << obverse_string[i] << "\n";
	}

	// Output reversed string to user
	std::cout << "Backwards, that's \"" << reverse_string << "\"\n";
	system("PAUSE");
	return 0;
}