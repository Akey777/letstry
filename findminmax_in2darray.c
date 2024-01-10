#include<stdio.h>
#include<limits.h>

//find max num in matrix
int main(){
int arr[3][3],max;
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter num");
        scanf("%d",&arr[i][j]);
    }
}
max=INT_MAX;
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(max>arr[i][j]){
            max=arr[i][j];
        }


  }
}
printf("%d",max);



}