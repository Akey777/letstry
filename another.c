#include<stdio.h>
#include<limits.h>
int main(){// find maximum value in array
int len, max=INT_MIN;
int palindorme=1;
printf("enter size of an array");
scanf("%d",&len);
 int arr[len];
 for (int i=0;i<len;i++){
printf("enter %d th element",i);
scanf("%d",&arr[i]);
 }
int brr[len];

for(int i=0, j=(len-1);i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}
for(int i=0, j=2;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}






for(int i=0;i<len;i++){
printf("%d ",arr[i]);




}
}