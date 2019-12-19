#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
        i++;
    }
    printf("The sum of the series = %d",sum);
    return 0;
}
