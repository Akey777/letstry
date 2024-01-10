#include<stdio.h>
int main(){
int arr[7]={1,2,1,2,4,34,4};
 int count=0;
for(int i=0;i<7;i++){
    int flag=0;
    for(int j=i+1;j<7;j++){
        if(arr[i]==arr[j]){
            flag=1;
            

        }
    }
   if(flag==0){
    printf("%d",arr[i]);
    break;
   }
}



}