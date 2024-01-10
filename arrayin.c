#include<stdio.h>

void chlo(int arr[],int *ptr,int size){
  
for (int i=0;i<5;i++){
    printf("%d ",*(ptr+i));
    
}




}





int main(){
int arr[5],*ptr=arr;
int size=sizeof(arr)/sizeof(int);

for(int i=0;i<size;i++){

    scanf("%d",ptr+i);
}


chlo(arr,ptr,size);






}