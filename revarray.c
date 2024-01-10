#include<stdio.h>

void reve( int arr[5]){
for(int i=0,j=4;i<5/2;i++,j--){//reverse array
arr[j]=(arr[i]+arr[j])-(arr[i]=arr[j]);
}

for(int i=0;i<5;i++){
    printf("%d",arr[i]);

}
return;
}
int main(){
int arr[5],brr[20];
for(int i=0;i<5;i++){
    printf("enter element");
    scanf("%d",&arr[i]);//take somthing return nothing
}
reve(arr);

}