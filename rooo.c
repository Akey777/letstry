#include<stdio.h>
int main(){
int num;

int arr[]={0,3,6,9,12,14,18,22,25};


int size=sizeof(arr)/sizeof(int);
printf("enter num");
scanf("%d",&num);
num=num%size;



for (int  j = 1; j<=num ; j++)
{
int tem=arr[0];
for (int i = 0; i <size ; i++)
{
    arr[i-1]=arr[i];
}
arr[size-1]=tem;

}
for (int i = 0; i <size ; i++){
    printf("%d ",arr[i]);
}






}