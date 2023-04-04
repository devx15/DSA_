#include <iostream>
#include <stdio.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1)*n;
    }
}

int combination(int p, int r)
{
    int num,dem;
    num=factorial(p);
    dem=factorial(r)*factorial(p-r);
    return num/dem;
    
}

int result(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return result(n - 1, r - 1) + result(n - 1, r);
    }
}

int main()
{
    printf("%d\n",combination(110,19));
    // cout << result(36, 34) << endl;
    return 0;
}