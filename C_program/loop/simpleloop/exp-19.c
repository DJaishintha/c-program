#include<stdio.h>
int main()
{
    int n1,n,c=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("no of digits in %d= %d",n1,c);
    return 0;
}
