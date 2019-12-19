#include<stdio.h>
int main()
{
    int M[10][10],T[10][10],i,j,row,col,flag=1;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            T[j][i]=M[i][j];
        }
    }
    printf("The transpose is\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(M[i][j]!=T[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag=0)
            {
                printf("\nThe matrix is not symmetric");
                break;
            }
        }
        if(flag=1)
        {
            printf("\nThe matrix is symmetric");
        }
    }
    else
        printf("\nThe matrix is not symmetric");

    return 0;


}
