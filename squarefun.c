#include<stdio.h>
float square(int a){
return a*a;
}


int main(){
int a ,t;
printf("enter a num:");
scanf("%d",&a);
t=square(a);
printf("square of a num:%d",t);

}