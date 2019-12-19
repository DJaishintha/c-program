#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],n,i,j,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements are %d",sum);
    return 0;
}
