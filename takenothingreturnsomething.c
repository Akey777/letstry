#include<stdio.h>
//take s r s
 void multi(){
float a,b;
char ch;
printf("enter num");
scanf("%f%f",&a,&b);
printf("%f\n",a*b);
printf("continue = for yes * for no");
scanf("%c",&ch);
if(ch=='='){
    multi();
}

multi();
}
int main(){
multi();





return 0;
}