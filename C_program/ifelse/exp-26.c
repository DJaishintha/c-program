#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
        printf("\ntriangle is valid");
    else
        printf("\ntriangle is not valid");
    return 0;
}
