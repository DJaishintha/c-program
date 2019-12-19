#include<stdio.h>
int main()
{
    int n1,n,a,rev=0;
    printf("enter no of terms");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("%d is the reverse of %d",rev,n1);
    return 0;
}
