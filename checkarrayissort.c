#include <stdio.h>
int checksorted(int arr[], int size)
{
//check this array is sorted or not
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] >= arr[i - 1]);
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    // check if the array is sorted
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter element:");
        scanf("%d", &arr[i]);
    }

    int r = checksorted(arr, 5);

    if (r == 1)
    {
        printf("this is sorted array");
    }
    else
    {
        printf("this is not sorted array");
    }
}