#include<stdio.h>
int main(){
int arr [4];
for(int i=0;i<4;i++){
printf("enter marks");
scanf("%d",&arr[i]);
}
for(int j=0;j<4;j++){
    if(arr[j]<=35){
        printf("%d ",j);
    }
}






}