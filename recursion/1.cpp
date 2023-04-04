#include<iostream>
using namespace std;

int pow(int m,int n){
    if (n==0)
    {
       return 1;
    }
    if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else{
        return pow(m*m,(n-1)/2)*m;
    }
    
}
int tree(int n)
{
    if (n > 100)
    {
        return n-10;
    }
    else{
        return tree(tree(n+11));
    }
}

int main()
{
    int f[5];
    for (int i = 0; i < 5; i++)
    {
        f[i]=i+1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<f[i]<<endl;
    }
    // cout<<pow(2,9)<<endl;
    // cout<<tree(100)<<endl;
    return 0;
}