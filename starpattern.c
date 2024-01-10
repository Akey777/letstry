#include<stdio.h>


void star(int num){
for(int i=1;i<=num;i++){
    for(int j=i;j<=num;j++){
        printf(" ");
    }
for(int k=1;k<=i;k++){
    printf("*");
} printf("\n");
}








}

int main(){
int num;
printf("enter of row");
scanf("%d",&num);
star(num);

}