#include <stdio.h>
int main()
{
    int arr[7] = {5, 6, 8, 4, 3,7,9}; // rotate array


    
        for (int i = 0, j = 6; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        for (int i = 0, j = 2; i < j; i++, j--)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    for (int j = 0; j < 7; j++)
    {
        printf("%d ", arr[j]);
    }
}