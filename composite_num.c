#include<stdio.h>
int main(){
int num,count ,i,j;
   for(j=2;j<=100;j++){
    count=0;
   for (i=2;i<j;i++){
      if(j%i==0){
        count+=1;
    
      }
   
   }

  if(count==0){
    printf("%d ",j);
   }
}

    
}