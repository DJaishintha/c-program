#include<stdio.h>
int main()
{
    int i,j,n,k,s=1;
    char ch;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
            {
          printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",s++);
        }
        printf("\n");
    }
    return 0;

}
