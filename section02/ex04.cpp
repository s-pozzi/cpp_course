#include "constants.h"
#include <iostream>

double enterHeight()
{
	std::cout << "Enter the initial height of the ball: ";
	double h;
	std::cin >> h;
	return h;
}

double computeHeight(double initialHeight, int t)
{
	double currentHeight = initialHeight - ( myConstants::g * t * t ) / 2.0;
	return currentHeight;
}

void printHeight(double h, int t)
{
	if (h >= 0)
		std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters." << std::endl;
	else
		std::cout << "At " << t << " seconds, the ball is on the ground." << std::endl;
}

void computeAndPrintHeight(double initialHeight, int t)
{
	double currentHeight = computeHeight(initialHeight,t);
	printHeight(currentHeight,t);
}

int main()
{
	// Runtime constant, because it relies on user input
	const double initialHeight = enterHeight();

	computeAndPrintHeight(initialHeight,0);
	computeAndPrintHeight(initialHeight,1);
	computeAndPrintHeight(initialHeight,2);
	computeAndPrintHeight(initialHeight,3);
	computeAndPrintHeight(initialHeight,4);
	computeAndPrintHeight(initialHeight,5);

	return 0;
}