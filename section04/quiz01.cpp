/*
Write a program that asks the user to enter two integers, the second larger than the first.
If the user entered a smaller integer for the second integer, use a block and a temporary variable to swap the smaller and larger values.
Then print the value of the smaller and larger variables. Add comments to your code indicating where each variable dies.
*/

#include <iostream>

int main()
{
	int a,b;
	std::cout << "Enter an integer: ";
	std::cin >> a;
	std::cout << "Enter a larger integer: ";
	std::cin >> b;

	if ( b < a )
	{
		int tmp = b;
		b = a;
		a = tmp;
	}	
	// tmp dies after the if, because i defined it inside the block

	std::cout << "Smaller integer: " << a << "\nLarger integer: " << b << std::endl;

}