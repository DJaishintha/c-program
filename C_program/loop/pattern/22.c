#include<stdio.h>
int main()
{
    int i,j,k,s=97;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<i;j++)

            printf(" ");

        for(k=i;k<=4;k++)
            printf("%c",s);
         s++;
        printf("\n");
    }
    return 0;
}


