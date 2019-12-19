#include<stdio.h>
#include<conio.h>
int main()
{
    int a[4][5],i,j;
    printf("Enter the array elements:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    }
    printf("array elements are:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}
