#include<stdio.h>
void swap (int *p,int *c){
*p=(*p+*c)-(*c=*p);
}

int main(){
    int a,b,*p=&a,*c=&b;


    printf("enter num:");
    scanf("%d%d",&a,&b);
    swap(p,c);
printf(" value of a is:%d\n",a);
printf(" value of b is:%d",b);
}