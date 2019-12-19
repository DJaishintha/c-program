#include<stdio.h>
int main()
{
    int i,j,s=1;
    for(i=1;i<=4;i++)
    {

        for(j=i;j<=4;j++)
        {

            printf("%d",s++);
        }
        printf("\n");
    }
    return 0;
}

