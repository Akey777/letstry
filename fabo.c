#include<stdio.h>
int  fact(int num){

if (num==1||num==0)
 return 1;
 return num*fact(num-1);



}
int main(){
int num;
printf("enter num");
scanf("%d",&num);
int r=fact(num);
printf("%d",r);
return 0;
}