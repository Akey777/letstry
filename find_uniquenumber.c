#include <stdio.h>
int main()
{ // sum of array
    int arr[5], sum = 0, brr[5],count;
    for (int i = 0; i < 5; i++)
    {
        printf("enter num");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {    count=0;
        for (int j = 0; j < 5; j++){
            if(arr[i]==arr[j]&&i!=j){
                count++;

            }


        }
        if(count==0){
            printf("%d",arr[i]);
        }
        }
    }
