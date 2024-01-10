#include<stdio.h>
int main(){
    int arr[5];
int evensum=0,oddsum=0;
for(int i=0;i<5;i++){
    printf("enter element");
    scanf("%d",&arr[i]);
}



for(int i=0;i<5;i++){
    if(arr[i]%2==0){
        evensum+=arr[i];
    }else oddsum+=arr[i];
}
printf("%d\n",evensum);
    
printf("%d",oddsum);
  
  }
    
    