#include<stdio.h>
int arms(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n==arms(n))
        printf("%d is an armstrong num",n);
    else
        printf("%d is not armstrong num",n);
    return 0;
}
int arms(int n1)
{
    int n2,c=0,p=1,s=0,i,a;
    n2=n1;
    while(n1>0)
    {
        c++;
        n1=n1/10;
    }
    while(n2>0)
    {
        p=1;
        a=n2%10;
     for(i=1;i<=c;i++)

         p=p*a;

         s=s+p;
         n2=n2/10;
    }
         return(s);
}
