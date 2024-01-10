#include<stdio.h>
int main(){
    int  arr[3][3]={{1,2,3},{4,5,6},{11,8,9}};
int sum=0,sum2=0;

    for(int j=0,k=2;j<3;j++,k--){
        sum+=arr[j][j];//left to right digonal
        sum2+=arr[j][k];//right  to left digonal

    }
    printf(" this is  sum ofleft:%d\n",sum);
printf(" this is for right digonal:%d\n",sum2);

for(int i=0;i<3;i++){
   int count=0,count1=0;
    for (int j=0;j<3;j++){
        count+=arr[i][j];
        count1+=arr[j][i];

    }
    printf(" this is for sum of Row:%d\n",count);
    printf(" this is for sum of colum:%d\n",count1);
}






}