#include<stdio.h>
int main(){
    int num,arr[10],sum=0,n;
   
    printf("enter num");
    scanf("%d",&num);
    for (int i=0;i<num-1;i++){
        printf("enter num....");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    
    }
int sum2=num*(num+1)/2;
printf("missing num is %d",sum2-sum);

}