#include<stdio.h>
#include<math.h>

int checkprime(int num){

int n=sqrt(num);

for(int i=2;i<=n;i++){
    if(num%i==0){
        return 0;
    }
}
return 1;

}



int main(){

int num;
printf("enter num:");
scanf("%d",&num);
for(int i=1;i<=num;i++){
  if(checkprime(i)){
    printf("%d ",i);
  }
}





}