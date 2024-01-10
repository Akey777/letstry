#include<stdio.h>
int main(){
int arr[3][3];
printf("enter matrix:");
for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
    scanf("%d",&arr[i][k]);

}
}

for(int i=0;i<3;i++){
    for(int j=0,k=2;j<k;j++,k--){
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=temp;
    }
}

for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        printf("%d ",arr[i][k]);
    }
    printf("\n");
}











}