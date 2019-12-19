#include<stdio.h>
int main()
{
    int i,j,f=1,n;
    float sum=0.0;
    printf("enter no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        if(i%2!=0)
            sum=sum+i/(float)f;
        else
            sum=sum-i/(float)f;
        i++;
    }
    printf("sum of series = %f",sum);
    return 0;
}
