#include<stdio.h>
int main(){

int arr[100],i,pos,item,size;

printf("enter size an array");
scanf("%d",&size);
printf("enter element :");
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);

}
printf("enter position");
scanf("%d",&pos);
printf(" enter item you want insert");
scanf("%d",&item);

for(i=4;i>=pos;i--){
   arr[i+1] =arr[i];
}
arr[pos]=item;

for(i=0;i<size+1;i++){
    printf("%d ",arr[i]);
}



}