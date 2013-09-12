/* 
Encyclopaedia Palindromic by B.T. Coyne (il Desdichado)
*/
#include <iostream>
#include <string>
int main()
{
	using std::string;

	string input;
	string test;

	std::cout << "Please enter a word you wish to check for being a palindrome.\n";
	std::cin >> input;

	// Reverse input and save into test
	int i;
	for (i = (input.length()-1); i > -1; i--)
	{
		test += input[i];
	}

	std::cout << "You typed " << input << "\n";
	std::cout << "Backwards that's " << test << "\n";

	system("PAUSE");

	if (test == input)
	{
		std::cout << "That's a palindrome!\n";
	}
	else
	{
		std::cout << "That is not a palindrome!\n";
	}
	system("PAUSE");
}