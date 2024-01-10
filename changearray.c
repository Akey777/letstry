#include<stdio.h>
int main(){
    int num;
    printf("enter num");
    scanf("%d",&num);

    int arr[num];
for(int i=0;i<num;i++){
    printf("enter value:");
    scanf("%d",&arr[i]);
}
//reverse
for (int i=0,j=num-1;i<j;i++,j--) {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

for(int i=0;i<num;i++){
    printf("%d",arr[i]);
}
























}