#include<stdio.h>
int sum(int a ,int b){
return a+b;


}



int main(){
int a,b;
printf("enter two num");
scanf("%d%d",&a,&b);
int c=sum(a,b);
printf("%d",c);
return 0;
}