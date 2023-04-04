#include <stdio.h>
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h, temp, temp1;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } while (i < j);

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int l, int h)
{
    int j;

    if (l < h)
    {
        j = partition(a, l, h);
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }
}
int main()
{
    int a[] = {10, 89, 11156, 54, 67};

    quicksort(a, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}