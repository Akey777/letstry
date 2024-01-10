#include<stdio.h>
int main(){
int num,a;
printf("enter a num");
scanf("%d",&num);
a=2;
while(num>1){
    if(num%a==0){
        printf("%d ",a);
        num=num/a;
    }else{
      a++;
    }
}

}