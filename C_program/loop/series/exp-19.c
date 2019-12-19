#include<stdio.h>
int main()
{
    int i,j,k,f=1,p=1,n;
    float sum=0.0;
    printf("enter no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        p=1;
        for(j=1;j<=i;j++)
            f=f*j;
        for(k=1;k<=2;k++)
        p=p*i;
        sum=sum+p/(float)f;
        i++;
    }
    printf("sum of series = %f",sum);
    return 0;
}

