#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i==1||j==1||j==10||i==10||i==j)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

