#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("ll%d",a);
    printf("\n%u",&a);
    printf("\n%u",&p);
    printf("\n%u",p);
    printf("\n%d",*p);
    printf("\n%u",*(&p));
    return 0;
}
