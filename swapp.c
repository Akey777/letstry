
#include<stdio.h>
void swap(int *a,int* b){
int temp=*a;
*a=*b;
*b=temp;

return;
}
int main(){
int a=10,b=13;

swap(&a,&b);

printf("%d",a);
printf("%d",b);

}