#include<stdio.h>
int main(){
    int arr[6]={1,2,4,5,6};
int pos=2;

for(int i=4;i>=pos;i--){
arr[i+1]=arr[i];
}
arr[pos]=3;

for(int i=0;i<5;i++){
    printf("%d",arr[i]);
}
}