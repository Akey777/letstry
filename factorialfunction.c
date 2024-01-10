#include<stdio.h>
int factorial(int num){
     int fact=1,i;
     for(i=1;i<=num;i++){
        fact*=i;
     }
return fact;
}


int main(){
int num;
printf("enter a num:");
scanf("%d",&num);
int result=factorial(num);

printf("factorial of %d is :%d",num,result);



}