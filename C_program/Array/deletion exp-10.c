#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int a[MAX],i,pos,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the  position to be deleted:");
        scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
        a[i-1]=a[i];
      n=n-1;
    printf("after deletion array elements are:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
