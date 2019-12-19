#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX],i,n,temp,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("ENTER ARRAY ELEMENTS:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("after reverse");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}
