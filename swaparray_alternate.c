#include<stdio.h>
void swaap_alternate(int arr[],int size){

for(int i=0;i<size;i+=2){

 if(i+1<size){
   arr[i]=(arr[i]+arr[i+1])-(arr[i+1]=arr[i]);
 }
}

printf("alternate swap array: ");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}



}





int main(){




int arr[6]={5,3,8,4,7,0};
int *p=arr;
int size=sizeof(arr)/sizeof(int );

swaap_alternate(arr,size);






}