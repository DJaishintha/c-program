#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,r1,c1,r2,c2,sum=0,k;
    printf("enter row and column of 1st array:");
    scanf("%d\t%d",&r1,&c1);
    printf("enter row and column of 2nd array:");
    scanf("%d\t%d",&r2,&c2);
    if(c1==r2)
    {
        printf("enter elements of A array:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        }
          printf("elements A array are:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
        printf(" \nenter elements of B array:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);

        }
        printf("elements of B array are:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",b[i][j]);
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                    sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
