#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,max,min;
    printf("Enter the value of array:");
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    printf("Array elements are:");
    for(i=0;i<9;i++)
        printf("%d",a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<9;i++)
    {
        if(a[i]>max)
            max=a[i];
        else if(a[i]<min)
            min=a[i];
    }
    printf("\nmaximum=%d",max);
    printf("\nminimum=%d",min);
    return 0;
}

