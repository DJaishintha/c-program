#include<stdio.h>
int main()
{
    int i,n;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
    }
    return 0;
}
