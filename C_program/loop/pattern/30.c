#include<stdio.h>
int main()
{
    int i,j,k,l,s;
    for(i=1;i<=5;i++)
    {

        for(j=1;j<i;j++)

            printf(" ");

        for(k=i;k<=5;k++)
          {
              if(k==i||i==1)
                printf("*");
              else
                printf(" ");
          }

        for(l=i;l<5;l++)
            {
                if(l==4||i==1)
                    printf("*");
                else
                    printf(" ");
            }


        printf("\n");
    }
    return 0;
}



