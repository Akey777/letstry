#include<stdio.h>
float intrest(int p,float r,int t){
float res=(p*r*t)/100;
return res;

}



int main(){
int p,t;
float r;
printf("enter principle amt");
scanf("%d",&p);
printf("rate of return");
scanf("%f",&r);
printf("enter time ");
scanf("%d",&t);

float result=intrest(p,r,t);
printf("%.3f",result);





}