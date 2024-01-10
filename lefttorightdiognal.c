#include<stdio.h>
int main(){
int arr[3][3],sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter element");
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
printf("\n");
}

for(int i=0;i<3;i++){
    sum+=arr[i][i];

}
printf("left top to right bottom\n");
printf(" sum of digonal: %d",sum);


}