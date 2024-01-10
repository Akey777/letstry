//wap to program to add two matrix
#include<stdio.h>
int main(){
int arr[2][2],brr[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter num");
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter num");
        scanf("%d",&brr[i][j]);
    }
}


for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        arr[i][j]=arr[i][j]+brr[i][j];
    }
}
//sum of two matrix element

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}



}