#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,item,n,pos;
    printf("Enter the no of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("Enter the value of the item and position to be inserted in array:");
    scanf("%d%d",&item,&pos);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[i+1]=item;
    n=n+1;
    printf("\nafter insertion the array elements are:");
     for(i=0;i<n;i++)
        printf("\n%d",a[i]);
     return 0;
}
