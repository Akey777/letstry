#include<stdio.h>
int main(){
int arr[5]={12,34,55,67,77};
int pos ,item;
printf("position");
scanf("%d",&pos);
printf("enter item ");
scanf("%d",&item);


for(int i=4;i>=pos;i--){
    arr[i+1]=arr[4];
}
arr[pos]=item;
for(int i=0;i<6;i++){
    printf("5d")
}



}