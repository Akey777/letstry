#include<stdio.h>
int main(){

int arr[3][3];
printf("enter matrix:");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}


//line swap
for(int i=0,k=2;i<k;i++,k--){
    for(int j=0;j<3;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[k][j];
        arr[k][j]=temp;
    }
    

}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}






}