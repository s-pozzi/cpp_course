/*
A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself.
Write a program that asks the user to enter a single digit integer.
If the user enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”.
Otherwise, print “The digit is not prime”.

Hint: 	Use if statements to compare the number the user entered to the prime numbers.
		Use a boolean to keep track of whether the user entered a prime number or not.
*/

#include <iostream>

bool isPrime(int x)
{
	if ( x==2 or x==3 or x==5 or x==7 )
		return true;
	else
		return false;
}

int main()
{
	std::cout << "Enter a single digit integer: " ;
	int x;
	std::cin >> x;
	if ( isPrime(x) )
		std::cout << "The digit is prime" << std::endl;
	else
		std::cout << "The digit is not prime" << std::endl;
}