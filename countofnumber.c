#include<stdio.h>
int main(){
int num,arr[5] ,count=0;//count the number of element in given  array greater than a given number
printf("enter num");
scanf("%d",&num);
for(int i=0;i<5;i++){
    printf("enter element:");
    scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++){
    if(arr[i]>num){
        count++;
    }
}printf("%d",count);




}