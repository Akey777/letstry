#include<stdio.h>
 void sum(int arr[5]){
    int sum=0;
for(int i=0;i<5;i++){
    sum+=arr[i];
}
printf(" the total sum of array:%d",sum);
 }
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter num");
        scanf("%d",&arr[i]);
    }
    sum(arr);
return 0;
}