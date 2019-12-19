#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,n2,sum=0,count=0,a,p=1,i;
    printf("enter a number");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(n1>0)
    {
        p=1;
        a=n1%10;
     for(i=1;i<=count;i++)

         p=p*a;

         sum=sum+p;
         n1=n1/10;
    }
    if(n2==sum)
        printf("%d is an armstrong num",n2);
    else
        printf("%d is not armstrong num",n2);
    return 0;
}
