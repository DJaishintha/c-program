#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n%5==0&&n%11==0)
        printf("\nit is divisible by 5 and 11 ");
    else
        printf("\nit is not divisible by 5 and 11");
    return 0;
}
