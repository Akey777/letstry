#include<stdio.h>
int main(){

//wap a program to check whether a given number is even or odd
int num,num2,num3;
printf("enter num");
scanf("%d",&num);
printf("\"enter num\"");
scanf("%d",&num2);
printf("\"enter num\"");
scanf("%d",&num3);

if(num>num2 && num>num3){
    printf("%d",num);

}else if(num2>num3){
    printf("%d",num2);
}else{
    printf("%d",num3);
}





}