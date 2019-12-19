#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],i,j,n;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    printf("enter elements of 1st array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf(" enter elements of 2nd array:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
     printf("elements of 1st array are:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
     printf("elements of 2nd array are:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    printf("sum of two arrays a and b is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-
            b[i][j];
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           {
               printf("%d\t",c[i][j]);
           }
           printf("\n");
    }
    return 0;
}

