#include<stdio.h>
int isEven(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(isEven(n))
        printf("\n%d is even",n);
    else
        printf("\n%d is odd",n);
    return 0;
}
int isEven(int x)
{
    return(x%2==0?1:0);
}
