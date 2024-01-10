#include <stdio.h>
int binaryserch(int arr[], int size, int element)
{
//binary searching.....
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
    if (arr[mid] == element)
        {
            return mid;
        }
    else if (arr[mid] < element)
        {
            low = mid + 1;
    }
    else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 10, 13, 52, 77, 88, 90, 106};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("enter element");
    scanf("%d", &element);
    int srch = binaryserch(arr, size, element);

    printf("  %d found in index  no. :%d", element, srch);
}