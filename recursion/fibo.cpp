#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    else
        return fibo(n - 1) + fibo(n - 2);
}

void fibonacci(int n)
{
    int a = 0, b = 1, f = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", f);
        f = a + b;
        a = b;
        b = f;
    }
}
int fib(int f[],int n){
    if (n<=1)
    {

        return n;
    }
    else{
        if (f[n-2]==-1)
        {
            f[n-2]=fib(f,n-2);
        }
        if (f[n-1]==-1)
        {
            f[n-1]=fib(f,n-1);
        }
        return f[n-1]+f[n-2];
    }
    
}

int main()
{
    int f[100];
    for (int i = 0; i < 100; i++)
    {
        f[i]=-1;
    }
    cout<<fib(f,8)<<endl;
    cout << fibo(5) << endl;
    fibonacci(8);

    return 0;
}