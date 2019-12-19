#include<stdio.h>
int main()
{
    int i,n,a;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        n=n/10;
    }
    printf(" %d is the first digit number",a);
    return 0;


}
