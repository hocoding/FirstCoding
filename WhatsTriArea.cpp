#include <iostream>
#include <cmath>
double area(double a, double b, double c);
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the length of side of the triangle: ";
	cin >> a >> b >> c;
	cout << "The area of the triangle is " << area(a, b, c) << ".\n";
	return 0;
}

/// giving definition to the function above area(a,b,c)

double area(double a, double b, double c) 
{
    double s;
    s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
