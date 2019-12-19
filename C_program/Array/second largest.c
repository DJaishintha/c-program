#include<stdio.h>
#include<conio.h>
#define MAX 10
#include<limits.h>
int main()
{
    int a[MAX],i,n,max1,max2;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max1=INT_MIN;
    max2=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1)
            max2=a[i];
    }
    printf("\nthe second largest element is %d",max2);
    return 0;
}
