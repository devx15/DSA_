#include<stdio.h>
int insertion(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int x=arr[i];
        while (j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}
int main()
{
    int arr[]={1,4,2,5,6,1,3,4,78};
    int n=9;
    insertion(arr,n);
    return 0;
}
