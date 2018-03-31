/*
Write a program that asks the user to enter their full name and their age.
As output, tell the user how many years they’ve lived for each letter in their name (for simplicity, count spaces as a letter).
*/

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std::string name;
	std::getline (std::cin, name);

	std::cout << "Enter your age: ";
	double age;
	std::cin >> age;

	double agePerLetter = age / name.length();
	std::cout << "You have lived " << agePerLetter << " years for each letter in your name." << std::endl;
}