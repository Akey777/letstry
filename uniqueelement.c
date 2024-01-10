#include<stdio.h>
//find unique element
void unique(int arr[5]){
    for(int i=0;i<5;i++){
        int count=0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]&&i!=j){
                count++;
            }
        } if(count==0){
            printf("%d",arr[i]); 
    }
}
return;
}

int main(){

int arr[5];
for(int i=0;i<5;i++){
    printf("enter num");
    scanf("%d",&arr[i]);
}
unique(arr);


return 0;
}