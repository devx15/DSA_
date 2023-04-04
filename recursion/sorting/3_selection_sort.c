#include <stdio.h>
int selection(int arr[], int n)
{
    int min;

    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("the array is\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t", arr[i]);
    }
}
int main()
{
    int arr[] = {5, 5, 3, 2, 4,78, 1};
    int n = 7;
    selection(arr, n);
    return 0;
}