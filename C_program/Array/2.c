#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    printf("Enter the value of array:");
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    printf("Array elements are:");
    for(i=0;i<9;i++)
        printf("%d",a[i]);
    for(i=0;i<9;i++)
      {
        if(a[i]<0)

            printf("\n%d",a[i]);
      }
    return 0;
}
