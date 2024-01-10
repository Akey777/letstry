#include<stdio.h>
int main(){
///swap array like this
/*   enter  output
1,2,3       3,2,1
4,5,6       6,5,4
7,8,9       9,8,7
*/
int arr[3][3],brr[3][3];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter num");
        scanf("%d",&arr[i][j]);
    }
}

int a=0,b=2;
for(int i=0;i<3;i++){
    int temp=arr[i][a];
    arr[i][a]=arr[i][b];
    arr[i][b]=temp;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
    
}










}