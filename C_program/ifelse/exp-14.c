#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
        printf("\nnumber is positive");
    else if(n<0)
        printf("\nnumber is negative");
    else if(n==0)
        printf("\nnumber is zero");
    return 0;
}
