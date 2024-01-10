#include<stdio.h>
int main(){
    int b[5]={1,3,4,5,6 },crr[5];
    for(int i=0;i<5;i++){
        crr[i]=b[4-i];

        
    }
    for(int i=0;i<5;i++){
        printf("%d",crr[i]);
    }
}