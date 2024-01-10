#include<stdio.h>
int main(){
//  Quest-    Write a program in C to print the next greatest elements in a given unsorted array. Elements for which no superior element exists, consider the next greatest element as -1.
// Expected Output :10 10 13 13 13 -1

// The given array is : 5 3 10 9 6 13



int arr [6]={5, 3 ,10, 9 ,6 ,13};
int max=arr[0];
for (int  i = 0; i < 6; i++)
{ 
    if (max<arr[i])
    {
        max=i;
    }
    
    for (int  j = i+1; i < 6; j++)
    {
       if (arr[i]<arr[j])
       {
        arr[i]=arr[j];
        break;

       }
       
    }
}
arr[max]=-1;


for (int i = 0; i < 6; i++)
{
    printf("%d ",arr[i]);
}




}