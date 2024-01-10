#include<stdio.h>
int main(){
int arr[6]={12,5,1,5,4,5};
 int count=0;
 int b;
for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(arr[i]==arr[j]){
             b=arr[i];
            count++;
        
            
        }
    }
   
}
if(count!=0){
    printf("%d time repeated num %d",count,b);
}
}