#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int findrepeat(int arr[],int check,int j){
for (int  i = j+1; i <7; i++)
{
    if (check==arr[i])
    {
        return check;
    }
    
}
return 0;

}



int main(){
    system("cls");
    

int arr[7]={ 1, 7, 4 ,7, 8, 3, 4};
printf("repeate element is:");
for (int  i = 0; i <7; i++)
{
    int check=arr[i];
 int max=findrepeat(arr ,check,i);
 if (max>0)
 {
    arr[i]=INT_MAX;
    printf("%d ",max);
 }
 

}








}