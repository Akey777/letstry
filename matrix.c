#include<stdio.h>
int main(){

int arr[3][3];
printf("enter matrix:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&arr[i][j]);

    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       if(j<(i==j) ){
          arr[i][j]=0;
       }

    }
} //for printing the array
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}



}