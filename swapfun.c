#include<stdio.h>

int swap(int x,int y){
    int tem=x;
    x=y;
    y=tem;
return x,y;

}
int main(){
int a,b;
printf("enter the num");
scanf("%d%d",&a,&b);
swap(a,b);
printf("swap number is a[%d] b[%d]",a,b);




}