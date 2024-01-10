#include<stdio.h>
int main(){
    int arr[2][2] ,brr[2][2],crr[2][2];
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("enter num");
            scanf("%d",&arr[i][j]);
        }
    }
for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
           printf("second matrix");
           scanf("%d",&brr[i][j]);

}
//substract two matrix
}

for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
          crr[i][j]=arr[i][j]-brr[i][j];

}

}

for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
           
           printf("%d",arr[i][j]);

}

printf("\n");
}

for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){

           printf("%d",brr[i][j]);
}
printf("\n");

}


for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){

           printf("%d",crr[i][j]);
}
printf("\n");

}


}