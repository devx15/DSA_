#include <stdio.h>
#include <stdbool.h>
int bubblesort(int arr[], int n)
{
    bool swap=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap=0;
            }
        }
        if (swap==1)
        {
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
int main()
{
    int arr[] = {1, 2, 34, 21, 23};
    int n = 5;
    bubblesort(arr,n);
    return 0;
}