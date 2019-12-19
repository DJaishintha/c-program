#include<stdio.h>
int main()
{
    int i,j,k,s;
    for(i=1;i<=4;i++)
    {
        s=4;
        for(j=1;j<i;j++)

            printf(" ");

        for(k=i;k<=4;k++)
            printf("%d",s--);

        printf("\n");
    }
    return 0;
}


