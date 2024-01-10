#include<stdio.h>
int main(){//find second largest num in array
int arr[6]={61,23,45,34,55,66};
int max=arr[0];
int smax=arr[0];

for(int i=1;i<6;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("%d",max);
for(int i=1;i<6;i++){//this is for find second largest
    if(arr[i]!=max && smax<arr[i]){
        smax=arr[i];
    }
}
printf("%d",smax);



}