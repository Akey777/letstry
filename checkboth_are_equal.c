#include<stdio.h>
int main(){
 int arr[2][2],brr[2][2],count;

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){//for take input 
        
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){//take input
        
        scanf("%d",&brr[i][j]);
    }
}
for(int i=0;i<2;i++){
count=0;
    for(int j=0;j<2;j++){
        if(arr[i][j]==brr[i][j]){
            count++;
        }
       
    }
}
if(count!=0){
    printf("both matrix are same");
}else printf("both are not same");







}