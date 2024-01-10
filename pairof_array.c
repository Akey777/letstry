#include<stdio.h>
int main(){
int x,arr[7]={12,22,13,11,7,9,6};
int num,count=0;
printf("enter num");
scanf("%d",&x);
for(int i=0 ;i<7;i++){
    num=arr[i];//12,22,13,11,7,9,6
    for(int j=1;j<7;j++){
        if(num+arr[j+i]==x && i!=j ){//12+22==x true or not
            count++;
          printf("%d %d i=%d j=%d", num ,arr[j+i],i,j);
        }
    }
}
printf("%d",count);





}