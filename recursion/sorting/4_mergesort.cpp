#include <iostream>
#include <stdio.h>
using namespace std;
void sort(int arr[], int k)
{
    for (int i = 0; i < k ; i++)
    {
        for (int j = 0; j < k - 1 - i; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    int c[100];
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            c[k++] = arr1[i++];
        }
        else
            c[k++] = arr2[j++];
    }
    for (; i < m; i++)
    {
        c[k++] = arr1[i];
    }
    for (; j < m; j++)
    {
        c[k++] = arr2[j];
    }
    for (int i = 0; i < 100; i++)
    {
        cout << c[i] << endl;
    }
}
int main()
{
    
    int arr1[] = {1, 5, 3, 4, 2};
    int arr2[] = {67,1,3,2,7,34,12,23,34,45};
    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    sort(arr1,n);
    sort(arr2,m);
    merge(arr1, arr2, n,m);

    return 0;
}