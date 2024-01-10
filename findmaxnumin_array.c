#include<stdio.h>
int main(){
int arr[5]={33,45,22,48,21};
int max=arr[0];
for(int i=1;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("%d",max);

//int arr[5]={33,45,22,48,21};
//int min=arr[0];    //this is for find min number
//for(int i=1;i<5;i++){
//    if(min>arr[i]){
//        min=arr[i];
//    }
//}
//printf("%d",min);

}