#include <stdio.h>

void merge(int *p, int *q, int *r, int size)
{

    for (int i = 0; i < size; i++)
    {
        *(r + i) = *(p + i);
        *(r + size + i) = *(q + i);
    }
}

int main()
{
    int arr[3], brr[3], crr[6], *p = arr, *q = brr, *r = crr;


    int size = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", p + i);
        
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%d", q + i);
    }
    merge(p, q, r, size);

    for (int i = 0; i < size + size; i++)
    {
        printf("%d ", *(r + i));
    }
}