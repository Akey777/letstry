
#include<stdio.h>
int main(){
    int num;
    printf("enter num of line");
    scanf("%d",&num);
 for(int i=1;i<=num;i++){
    for(int j=1;j<=2*num-1;j++){
        if(j>=num+1-i&&j<=num-1+i){
            printf("* ");
        }else{
            printf("  ");
        }
    }
    printf("\n");
 }


}