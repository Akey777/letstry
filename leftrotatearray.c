#include<stdio.h>
int main(){
int i,arr[5]={1,2,3,4,5};
 int count=0;
while(count<3){
int temp=arr[0];
for( i=0;i<5;i++){
    arr[i]=arr[i+1];
}
arr[i-1]=temp;
count++;
}

for( i=0;i<5;i++){
    printf("%d",arr[i]);
}


}