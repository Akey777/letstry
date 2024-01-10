#include<stdio.h>
int sumoff(int n){

if (n==0){
    return 0;
}



    return  n+sumoff(n-1);
}




int main(){

int num ;
printf("enter num");
scanf("%d",&num);
int r=sumoff(num);
printf("%d",r);



}