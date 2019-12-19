#include<stdio.h>
int cubes(int);
int main()
{
    int a,b;
    printf("enter any number:");
    scanf("%d",&a);
    b=cubes(a);
    printf("\ncube is %d",b);
    return 0;
}
int cubes(int a)
{
    return(a*a*a);
}
