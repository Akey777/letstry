#include<stdio.h>
#include<stdbool.h>
int main(){
int num,arr[5];
for (int i=0;i<5;i++){
    printf("enter num");
    scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++){
       int count=0;
    for(int j=i+1;j<5;j++){
        if(arr[i]==arr[j]){
           count++;

        }
        
    }
    if(count==0){
        printf("%d",arr[i]);
        break;
        
        
    }
}


return 0;
}