#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    (a>b?(a>c?printf("%d is greater",a):printf("%d is greater",c)):(b>c?printf("%d is greater",b):printf("%d is greater",c)));
    return 0;
}
