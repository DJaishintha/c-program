#include<stdio.h>
int main()
{
    int i,n,f1=0,f2=1,f3;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("%d %d",f1,f2);
    i=3;
    while(i<=n)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}
