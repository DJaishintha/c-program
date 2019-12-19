#include<stdio.h>
int main()
{
    int i,j,k,s;
    for(i=1;i<=4;i++)
    {

        for(j=1;j<i;j++)

            printf(" ");

        for(k=i;k<=4;k++)
            {
                if(i==1||k==i||k==4)
                    printf("*");
                else
                    printf(" ");
            }

        printf("\n");
    }
    return 0;
}



