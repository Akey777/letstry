#include<stdio.h>
int main(){//qust--given an array of int ,change the value of  all odd index element 
int arr[5];//to its second mulitiple and increment all even indexed value by 10
for(int i=0;i<5;i++){
    printf("enter num");
    scanf("%d",&arr[i]);
}for(int j=0;j<5;j++){
    if(j%2==0){
        arr[j]+=10;
    }else arr[j]*=2;
}
for(int j=0;j<5;j++){
    printf("%d ",arr[j]);
}
}