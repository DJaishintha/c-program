#include<stdio.h>
int main()
{
    int a=1,b=2,n,i,sum1=0,sum2=0,sum=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        if(i%2==1)
            {
                a=a*3;

                sum1=sum1+a;
            }
        else
           {
            b=b*3;
            sum2=sum2+b;
           }
         sum=1+2+sum1+sum2;
    }

    printf("The sum of the given series = %d",sum);
    return 0;
}
