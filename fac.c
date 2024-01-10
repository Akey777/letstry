#include<stdio.h>
void natural(int n){
//n natural num
if (n==0) return;
 
 natural(n-1);

printf("%d\n",n);



}
int main(){

int num ;
printf("enter num");
scanf("%d",&num);
natural(num);





}