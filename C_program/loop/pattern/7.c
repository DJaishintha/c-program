#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(j=i;j<7;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            if(i==1||i==7)
                printf("*");
            else if(k==1||k==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
