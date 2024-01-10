#include<stdio.h>
int main(){//write a program to copy the content of one array into another array
int arr[5]={12,34,56,78,90};//copy into second array in reverse order
int brr[5];
for(int i=0;i<5;i++){
brr[i]=arr[4-i];
}
for(int i=0;i<5;i++){
printf("%d ",brr[i]);

}



}