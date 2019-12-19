#include<stdio.h>
int main()
{
    int a[10],i,n,j,k,data;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("array elements are:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            data=a[i];
            if(data==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n=n-1;
             j=j-1;
            }

        }
    }
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    return 0;
}
