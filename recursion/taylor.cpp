#include <iostream>
using namespace std;

float taylor(float x,float n){
    static float p=1,f=1,r;
    if (n==0)
    {
        return 1;
    }
    else{
        r=taylor(x,n-1);
        p=p*x;
        f=f*(n);
        return r+(p/f);
    }
}

float exp(int x,int n){
    float s=1;
    for (;n>0;n--)
    {
        s=1+(x*s)/n;
    }
    
    return s;
}

float expansion(int x,int n){
    static float s=1;
    if (n==0)
    {
        return s;
    }
    s=1+(x*s)/n;
    return expansion(x,n-1);
    
}

int main()
{
    cout<<taylor(3,3)<<endl;
    cout<<exp(3,3)<<endl;
    cout<<expansion(3,3)<<endl;
    return 0;
}