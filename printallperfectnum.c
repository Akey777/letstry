#include<stdio.h>
int main(){
//prime num
int n ,count,i,j;
printf("enter num");
scanf("%d",&n);
for( i=1;i<=100;i++){
    count=0;
    
    for(j=1;j<=i/2;j++){
        if(i%j==0){
            count+=j;
        }
    }
    if(count==i){
        printf("%d ",i);

    }
}

}