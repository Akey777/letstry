#include<stdio.h>
void unique(int arr[], int b){
int c;
for(int i=0;i<b;i++){
     c=arr[i]^arr[i+1];
}

printf("%d",c);

}





int main(){
int n;

printf("enter num");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter num");
    scanf("%d",&arr[i]);
}

unique(arr,n);



}