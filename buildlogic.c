#include<stdio.h>
int main(){

int arr[7]={1,2,3,4,5,6,7};//output like this {5,6,7,1,2,3,4}
int k=3;
for(int i=0,j=k+1;i<3;i++,j++){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}
}
