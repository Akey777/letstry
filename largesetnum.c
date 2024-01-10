#include<stdio.h>

int main(){

int arr[5]={12,34,56,23,77};
int b=arr[0];
int c=arr[0];
for(int i=1;i<5;i++){
    if(b<arr[i]){
        c=b;
        b=arr[i];
    }else if(b<arr[i]){
        b=arr[i];
    }

}
printf("max value is %d\n",b);
printf("second largest %d",c);



}