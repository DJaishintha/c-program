#include<stdio.h>
int main()
{
    int i,j,k,l,s;
    for(i=1;i<=5;i++)
    {

        for(j=i;j<5;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            if(k==1||i==5)
                printf("*");
            else
                printf(" ");
        }

         for(l=1;l<i;l++)
         {
             if(l==i-1||i==5)
                printf("*");
             else
                printf(" ");
         }


            printf("\n");

    }
    return 0;
}
