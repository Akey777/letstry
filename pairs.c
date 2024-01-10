#include<stdio.h>
int main(){
int x,arr[7]={12,13,11,7,9,6,5};
int num,count=0;
printf("enter num");
scanf("%d",&x);//not correct
for(int i=0 ;i<7;i++){
    for( int j=i+1;j<=7;j++){
        if(arr[i]+arr[j]==x){
            printf("(%d,%d)",arr[i],arr[j]);
            count++;
        }
    }
}printf("%d",count);



}