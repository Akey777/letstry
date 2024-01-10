#include<stdio.h>
int main(){
int sum=0, arr[10]={1,2,3,4,6,7,8,9};
for(int i=0;i<10;i++){
    sum=sum+arr[i];
}//find missing num
int j ,sum2,num=9,n;

n=num*(num+1)/2;

sum2=n-sum;
printf("%d",sum2);

}