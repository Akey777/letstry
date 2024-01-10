#include<stdio.h>
int main(){

int arr[]={38 ,44 ,63, -51, -35, 19, 84, -69, 4 ,-46};
int max, a, b;
for (int  i = 0; i < 10; i++)
{          max=0;
    for (int j = i+1; j <10; j++)
    {
        if ((arr[i]+arr[j])<max)
        {
             max=arr[i]+arr[j];
             
            a=i;
            b=j;
        //  printf("%d %d ",a,b);
        }
        

    }
    
}
 printf("a=[%d]b=[%d]",arr[a],arr[b]);




}