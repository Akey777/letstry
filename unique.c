#include<stdio.h>
int main(){
    int ans=0;
int arr[7]={4,5,6,5,4,7,6};
for (int i = 0; i <7 ; i++)
{
    ans=ans^arr[i];
    printf("%d\n",ans);
}
// printf("the unique element:%d",ans);








}