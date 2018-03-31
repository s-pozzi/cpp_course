// I include it only once, here! Not in io.cpp
#include "io.h"

int main()
{
	int a,b;
	a = readNumber();
	b = readNumber();
	writeAnswer(a+b);
	return 0;
}