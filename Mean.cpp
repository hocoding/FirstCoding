/*
Exercise 60
Write the definition of a (appropriately named) function which takes two real numbers
as input, and outputs their arithmetic mean. Write a complete program which uses the
function such as the following example.
Enter two real numbers: 3 7
The arithmetic mean of 3 and 7 is 5.

Exercise 62
Modify the program you wrote for Exercise 60 so that a user can request the arithmetic
mean of an arbitrary number of pairs of reals, as follows.
Enter two real numbers: 3 7
The arithmetic mean of 3 and 7 is 5.
Would you like to continue? (y/n) y
Enter two real numbers: -3.2 7.8
The arithmetic mean of -3.2 and 7.8 is 2.3.
Would you like to continue? (y/n) n
Thank you!
*/
#include <iostream>
#include <cmath>
double mean(double a, double b);
using namespace std;

int main()
{
    double a, b;
    cout << "Enter two real numbers: ";
    cin >> a >> b;
    cout << "The arithmetic mean of " << a << " and " << b << " is " << mean(a,b) << " .\n";
    cout << "Would you like to continute? (y/n) ";
    
    char ans;
    cin >> ans;
    if(ans == 'y')
    {
    cout << "Enter two real numbers: ";
    cin >> a >> b;
    cout << "The arithmetic mean of " << a << " and " << b << " is " << mean(a,b) << " .\n";
    cout << "Would you like to continute? (y/n) ";
    cin >> ans;
        }
    cout << "Thank you!";
    return 0;
}

double mean(double a, double b)
{
    double s;
    s=(a+b)/2;
    return s;
}
