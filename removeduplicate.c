#include<stdio.h>
int main(){
int k=0;
int count;
int arr[12]={1,2,3,5,4,5,1,3,2,7,8,9};

for (int  i = 0; i < 12; i++){
    for (int j = i+1; j <12; j++)
    {
         if (arr[i]>arr[j]){
            arr[i]=(arr[i]+arr[j])-(arr[j]=arr[i]); 
         } 
    }
}

// printf("the sorted array");
// for (int  i = 0; i < 12; i++)
// {
//    printf("%d ",arr[i]);
// }

for (int  i = 0; i < 12; i++){
         count=0;
    for (int j =0; j <12; j++)
    {
        if(arr[i]==arr[j]&& i!=j){

             count++;
        }

    }
    
    if(count==0){
        arr[k]=arr[i];
           k++;
    }
    
}



for (int i = 0; i<k; i++)
{
    printf("%d",arr[i]);
}






}