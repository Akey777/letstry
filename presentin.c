#include<stdio.h>
int main(){
int n, pr,flag=0;
printf("enter len of an array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter num\n");
    scanf("%d",&arr[i]);
}
printf("enter num this is present in array or not?");
scanf("%d",&pr);


for(int i=0;i<n;i++){
    if(arr[i]==pr){
        flag=1;
        break;

    }
}
if(flag){
    printf("present in array");
}else{
    printf("this is not present ");
}



}