#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int i,j,temp,a[MAX],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array elements before sorting are:");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\narray elements after sorting are:");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    return 0;
}
