#include <stdio.h>
int divide(int *ptr,int *ctr){

return *ptr/ *ctr;

}



int main()
{

    int num, num2, *ptr = &num, *ctr = &num2;
    printf("enter two num");
    scanf("%d%d", &num, &num2);

   int r= divide(ptr, ctr);
printf("%d",r);

}