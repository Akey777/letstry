#include<stdio.h>
int main(){
int arr[10];
for (int i=0;i<5;i++){
    printf("enter num");
    scanf("%d",&arr[i]);

}int b=sizeof(arr[0]);
printf("%d",b);



}