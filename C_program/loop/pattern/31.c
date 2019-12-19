#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o,p;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        for(l=1;l<i;l++)
                printf("*");
                printf("\n");
    }
    for(m=1;m<5;m++)
    {
        for(n=1;n<=m;n++)
            printf(" ");
        for(o=m;o<5;o++)
            printf("*");
        for(p=m;p<4;p++)
            printf("*");
            printf("\n");

    }
    return 0;
}
