#include <stdio.h>
int selection(int arr[], int k, int size)
{
    int min = arr[k];
    int min_index = k;
    for (int i = k+1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            
            min_index = i;
        }
    }
    return min_index;
}

int main()
{

    int arr[6] = {34, 57, 11, 18, 69, 12};
    int size = 6;
    for (int i = 0; i < 6; i++)
    {
        int k = i;
        int min = selection(arr, k, size);
          arr[i]=(arr[i]+arr[min])-(arr[min]=arr[i]);
    }


    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}
