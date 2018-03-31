// Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
// Write a function called isEven() that returns true if an integer passed to it is even.
// Use the modulus operator to test whether the integer parameter is even.

#include <iostream>

int getInteger()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

bool isEven(int number)
{
	// true is 'number' is even
	return (number % 2) == 0 
}

void printIsEvenOdd(bool even)
{
	if ( even )
		std::cout << "The number is even." << std::endl;
	else
		std::cout << "The number is odd." << std::endl;
}

int main()
{
	int number = getInteger();
	bool even = isEven( number );
	printIsEvenOdd( even );

	return 0;
}