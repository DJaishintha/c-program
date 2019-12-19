#include<stdio.h>
int main()
{
    int i,j,s=97;
    for(i=1;i<=5;i++)
    {

        for(j=i;j<=5;j++)

            printf("%c",s);


        s++;
        printf("\n");
    }
    return 0;
}

