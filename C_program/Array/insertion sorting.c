#include<stdio.h>
#include<conio.h>
#define MAX 10
int main()
{
    int i,j,temp,a[MAX],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array elements before sorting are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\narray elements after sorting are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
