#include <iostream>
#include <cmath>
using namespace std;
int fibonacci(int);
int cf_fibonacci(int);
int r_fibonacci(int);

int main()
{
    for (int i=0;i<10;++i)
    cout << fibonacci(i)<< '\t'
    <<cf_fibonacci(i) << endl;
    return 0;
}

/*int main()
{
    int x =2;
    int&y = x;
    cout << "x: " <<x <<"\ty: " << y << 'y'
}*/
int cf_fibonacci(int n)
{
    double phi = (1+sqrt(5))/2, psi = (1-sqrt(5))/2;
    return (pow(phi,n)-pow(psi,n))/sqrt(5);
}

int r_fibonacci(int);
{
    if (n==1 || n==0) return 1;
    return f_fibonacci(n-1)+r_fibonacci(n-2);
}

int fibonacci(int n)
{
    if(n==0 || n==1) return 1;
    int left=1,right=1,tmp;
    for (int i=0;i<n-1;++i)
    {
        tmp = right;
        right += left;
        left = tmp;
    }
}
