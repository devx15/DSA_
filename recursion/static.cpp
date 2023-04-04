#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        static int x = 0;
        x++;
        return (n - 1) + x;
    }
    return 0;
}

int main()
{
    printf("%d\n", fun(5));
    return 0;
}