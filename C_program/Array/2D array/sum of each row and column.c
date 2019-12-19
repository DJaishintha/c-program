#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX],n,i,j,sum1,sum2;
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
        sum1=0;
       for(j=0;j<n;j++)
       {
           sum1=sum1+a[i][j];
       }
      printf("sum of %d row is %d\n",i+1,sum1);
    }
     for(j=0;j<n;j++)
    {
        sum2=0;
       for(i=0;i<n;i++)
       {
           sum2=sum2+a[i][j];

       }
       printf("sum of %d column is %d\n",j+1,sum2);


    }
    return 0;
}
