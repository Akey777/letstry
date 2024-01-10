#include<stdio.h>
int main(){
int arr[5]={12,22,34,55,67};
 int brr[5];
for(int i =0,j=4;i<j;i++,j--){
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];

}
for(int j=0;j<5;j++){
    printf("%d ",arr[j]);
}






}