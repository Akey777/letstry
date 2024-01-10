#include<stdio.h>
int main(){
int n;//increasing shorthing

int arr[5]={12,38,26,21,8};
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            arr[i]=arr[i]+arr[j];

            arr[j]=arr[i]-arr[j];

            arr[i]=arr[i]-arr[j];


        }

    }
}
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}


 




int arr[5]={12,38,26,21,8};
 int max=arr[0];
for(int i=0;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }



}











}
