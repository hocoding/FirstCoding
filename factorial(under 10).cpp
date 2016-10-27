#include <iostream>
#include <cmath>

int factorial(int);
using namespace std;

int main()
{
    for (int i=0; i<10;++i)
    cout << i << "!= " << factorial(i) << '\n';
    return 0;
}

int factorial(int n)
{
    if (n==0) return 1;
    return n*factorial(n-1);
}
