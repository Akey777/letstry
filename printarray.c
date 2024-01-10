#include <stdio.h>
int sum(int *p, int *s){
    return *p+*s;
}



int main()
{

    int a, b,        *p = &a, *s = &b;
printf("enter num");
scanf("%d%d",&a,&b);
 int d=sum(p,s);

printf("%d",d);

}