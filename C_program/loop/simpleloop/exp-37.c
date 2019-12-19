#include<stdio.h>
int main()
{
    int i,j,n,n1,n2,n3,a,sum=0,count=0,p=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n1=i;
        n2=i;
        n3=i;
        count=0;
        sum=0;
        while(n3>0)
        {
            count++;
            n3=n3/10;
        }
        while(n1>0)
        {
            p=1;
            a=n1%10;
            for(j=1;j<=count;j++)
                p=p*a;

            sum=sum+p;
            n1=n1/10;
        }
        if(n2==sum)
            l
            printf("%d\n",i);

    }

    return 0;
}
