#include<stdio.h>
int main(){
int arr[5],brr[5],crr[10];
//merge krne ke liye...
for(int i=0;i<5;i++){
    printf("enter first:");
    scanf("%d",&arr[i]);
}

for(int i=0;i<5;i++){
    printf("enter second");
    scanf("%d",&brr[i]);
}
for(int i=0;i<5;i++){
    crr[i]=arr[i];
    crr[i+5]=brr[i];
}
for(int i=0;i<10;i++){
    printf("%d ",crr[i]);

}



}