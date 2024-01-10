#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}
int main()
{
    int num;
    printf("enter num ");
    scanf("%d", &num);
    int r = sum(num);
    printf("%d", r);
}