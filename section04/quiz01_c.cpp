/*
You are running a website, and you are trying to keep track of how much money you make per day from advertising.
Declare an advertising struct that keeps track of how many ads you’ve shown to readers,
												  what percentage of ads were clicked on by users,
												  and how much you earned on average from each ad that was clicked.
Read in values for each of these fields from the user.
Pass the advertising struct to a function that prints each of the values,
and then calculates how much you made for that day (multiply all 3 fields together).
*/

#include <iostream>

struct Advertising
{
	int numberAds;
	double percentageClickedOn;
	double avgEarnedPerClick;
};

void printValues(Advertising ads)
{
	std::cout << "\nNumber of ads shown to readers: " << ads.numberAds;
	std::cout << "\nPercentage of ads clicked on: " << ads.percentageClickedOn;
	std::cout << "\nAverage earned per clicked on ad: " << ads.avgEarnedPerClick;

	double gain = ads.numberAds * ads.percentageClickedOn * ads.avgEarnedPerClick;
	std::cout << "\nHow much did i make today? " << gain << std::endl;
}

int main()
{
	Advertising ads;

	std::cout << "Number of ads shown to readers: ";
	std::cin >> ads.numberAds;
	std::cout << "Percentage of ads clicked on: ";
	std::cin >> ads.percentageClickedOn;
	std::cout << "Average earned per clicked on ad: ";
	std::cin >> ads.avgEarnedPerClick;

	printValues(ads);

	return 0;
}