#include<stdio.h>
int main(){//area of rectangle
int len,width ,result;
printf("enter len");
scanf("%d",&len);
printf("enter width");
scanf("%d",&width);
result=len*width;
printf(" area of rectangle:%d\n",result);

result=2*(len+width);
printf(" perimeter of rectangle: %d",result);




}