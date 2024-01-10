#include<stdio.h>
int main(){
    
for(int i=1;i<=100;i++){
    int count=0;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            count++;
            break;
        }
    }
  if(count==0) printf("%d\n",i);

}








}