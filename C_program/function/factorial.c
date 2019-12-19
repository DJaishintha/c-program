#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("enter the value of n");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of %d=%d",n,f);
    return 0;
}
int fact(int p)
{
   int i,f=1;
   for(i=1;i<=p;i++)
      f=f*i;
   return(f);
}
