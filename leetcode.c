#include <stdio.h>
void serch(int arr[], int size)
{
    int count, n, i, j, l = 0;
    int brr[size];
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        l++;
        brr[i] = count;
    }

    for (int f = 0; f < l; f++)
    {
        printf("element: %d time\n", brr[f]);
    }
}

int main()
{

    int size;
    printf("enter size:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter num");
        scanf("%d", &arr[i]);
    }
    serch(arr, size);
}