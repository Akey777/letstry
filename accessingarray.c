#include <stdio.h>

void reverse(int *p, int size)
{

    for (int i = 0, j = 4; i < j; i++, j--)
    {
        *(p + i) = (*(p + i) + (*(p + j))) - (*(p + j) = (*(p + i)));
    }
}
int main()
{
    int arr[5], *p;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("enter num");
        scanf("%d", p + i);
    }
    int size = sizeof(arr) / sizeof(int);
    reverse(p, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
}
