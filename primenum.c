#include <stdio.h>
#include <math.h>
int isprimee(int num)
{
    if(num<=1){
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("enter num");
    scanf("%d", &num);
    int r = isprimee(num);
    if (r)
    {
        printf("num is prime ");
    }
    else
    {
        printf("this is not prime");
    }
}