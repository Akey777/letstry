#include<stdio.h>

int binarysearch(int arr[],int size,int num){
    int start=0,mid ,end=size-1;
while(start<=end){
mid=(start+end)/2;
if(arr[mid]==num){
    return mid;
}else if(arr[mid]>num){
    end=mid-1;
}else{
    
    start=mid+1;
}
}
return -1;
}

int  main(){
int arr[]={1,2,3,8,9,12,54,55,77,88,90,99,102,230,554,667};
int size=sizeof(arr)/sizeof(arr[0]);
int num=230;
int srch=binarysearch(arr,size,num);
printf("%d is present in array position %d",num,srch);






}