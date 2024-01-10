#include <stdio.h>
void fabonacci(int num);
int main()
{
    int num;
    printf("enter num");
    scanf("%d", &num);
    fabonacci(num);
}
void fabonacci(int num)
{

    int a = 0, b = 1, c;
    while (num >= 1)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        num--;
    }
}