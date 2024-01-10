#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<2*n;i++){

int patt=i>n?2*n-i:i;

    for(int j=1;j<=patt;j++){
        printf("* ");
     
    }
    printf("\n");

}
}