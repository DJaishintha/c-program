#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        f=f*i;
    printf("factorial of %d = %d",n,f);
    return 0;
}
