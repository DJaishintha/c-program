#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX],i,n,item,low,high,mid;
    printf("Enter the size of array:")
    ;
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    low=0; high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            printf("item found at %d position",mid+1);
            break;
        }
        if(item<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}
