#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=5;i++)
    {
        s=1;
        for(j=i;j<=5;j++)
        {
            printf("%d",s++);
        }
        printf("\n");
    }
    return 0;
}

