// I moved the #include here, because std::cout std::cin std::endl are needed here first
#include <iostream>

int readNumber()
{
	int x;
	std::cout << "Choose a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int s)
{
	std::cout << "Sum is: " << s << std::endl;
}