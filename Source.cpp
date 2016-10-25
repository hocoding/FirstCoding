#include <iostream>
#include <cmath>
double cube(double x);

int main()
{
	std::cout << "The cube of 3.5 is "
		<< cube(3.5) << std::endl;

	return 0;
}
double cube(double x)
{
	return x*x*x;
}