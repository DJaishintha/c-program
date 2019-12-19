#include<stdio.h>
int main()
{
    int i,n;
    float sum=0.0,a;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       a=i/(float)(i+1);
       if(i%2!=0)
       sum=sum+a;
       else
        sum=sum-a;
       i++;
    }
    printf("The sum of the given series = %f",sum);
    return 0;

}
