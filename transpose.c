#include<stdio.h>
int main(){
int arr[2][2];
printf("enter matrix:");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<2;i++){
    for(int j=i;j<2;j++){
        arr[i][j]=(arr[i][j]+arr[j][i])-(arr[j][i]=arr[i][j]);

    }
}

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
         printf("%d",arr[i][j]);
    }
    printf("\n");
}

}