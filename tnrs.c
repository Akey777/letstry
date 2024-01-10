//take nothing return something;
#include<stdio.h>
int add();
int main(){
 int s=add();
printf("%d",s);


}
//add function 
int add(){
    int a,b,c;
printf("enter a num");
scanf("%d%d",&a,&b);
 c=a+b;
return c;

    
}