#include<stdio.h>




int naturalnum(int num1,int num2){
  for(int i=num1;i<=num2;i++){
    printf("%d ",i);
  }

}





int main(){
int num1,num2;
printf("enter  lower limit and/ upper limit ");
scanf("%d%d",&num1,&num2);
naturalnum(num1,num2);


}