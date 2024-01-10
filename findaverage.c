//find average in a array
#include<stdio.h>
int main(){
int sum=0,arr[10],num;
double average;
printf("enter num");
scanf("%d",&num);
for (int i=0;i<num;i++){
    printf("enter %d th ",i);
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
average=(double) sum/num;

printf("%0.2lf",average);




}