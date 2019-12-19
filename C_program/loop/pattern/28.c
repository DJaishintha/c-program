#include<stdio.h>
int main()
{
    int i,j,k,l,s;
    for(i=1;i<=4;i++)
    {

        for(j=1;j<i;j++)

            printf(" ");
          s=1;
        for(k=i;k<=4;k++)
            printf("%d",s++);
            s=s-1;
        for(l=i;l<4;l++)
                printf("%d",--s);


        printf("\n");
    }
    return 0;
}


