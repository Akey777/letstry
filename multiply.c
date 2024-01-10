#include<stdio.h>
int mult(int *p,int *s){

int d= (*p) * (*s);
return d;



}



int main(){
    //using pointer 
int a=5,b=7;
int *p=&a,*s=&b;
int ans=mult(p,s);
printf("%d",ans);

}