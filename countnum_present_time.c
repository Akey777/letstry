
#include<stdio.h>
int main(){
int arr[5],count=0,num;
for(int i=0;i<5;i++){
    printf("enter element");
    scanf("%d",&arr[i]);
//print how many time a num present in array
}
printf("enter check ");
scanf("%d",&num);

for(int i=0;i<5;i++){
    if(arr[i]==num){
        count++;
        printf("%d ",i);
    }

}
if(count!=0){
    printf(" \n %d time present in array",count);
}else{
    printf("Not found");
}




}