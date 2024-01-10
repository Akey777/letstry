#include<stdio.h>
void serch(int arr[],int size ,int n){
 
 for(int i=0;i<size;i++ ){
    for(int j=0;j<size;j++){
        if(arr[i]+arr[j]==n){
            printf("%d%d",i,j);
            return;
        }
    }
 }




}




int main(){

int n;
int arr[6]={2,4,7,9,8,6};
int size=sizeof(arr)/sizeof(int);

printf("enter num");
scanf("%d",&n);
 serch(arr,size,n);




}