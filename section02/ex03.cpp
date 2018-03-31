#include <iostream>

double enterDouble()
{
	std::cout << "Enter a double: ";
	double x;
	std::cin >> x;
	return x;
}

char enterSymbol()
{
	std::cout << "Enter one of the following (+ - * /): ";
	char x;
	std::cin >> x;
	return x;
}

void printResult(double a, double b, char s)
{
	if ( s=='+' )
		std::cout << "The result of "<< a << s << b << " is " << a + b << std::endl;
	else if ( s=='-' )
		std::cout << "The result of "<< a << s << b << " is " << a - b << std::endl;
	else if ( s=='*' )
		std::cout << "The result of "<< a << s << b << " is " << a * b << std::endl;
	else if ( s=='/' )
		std::cout << "The result of "<< a << s << b << " is " << a / b << std::endl;
}

int main()
{
	double a,b;
	a = enterDouble();
	b = enterDouble();

	char s;
	s = enterSymbol();
	
	printResult(a,b,s);

	return 0;	
}