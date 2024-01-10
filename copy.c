#include<stdio.h>
void copyy(int *ptr,int *ctr,int size){

for(int i=0;i<size;i++){
    *ctr=*ptr;
     ctr++,ptr++;
}






}
int main(){
int arr[5],brr[5],*ptr=arr,*ctr=brr;
int size=sizeof(arr)/sizeof(int);


for(int i=0;i<size;i++){
   scanf("%d",&arr[i]);
}

copyy(ptr,ctr,size);







printf("value of copu arr|\n");


for(int i=0;i<size;i++){
    printf("%d",*(ctr+i));

}

}