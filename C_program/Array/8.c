#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,b[5];
    printf("Enter the value of a and b array:");
    for(i=0;i<5;i++)
        scanf("%d%d",&a[i],&b[i]);
    printf("Enter the value of b array:");
    printf("Array elements of a and b are:");
    for(i=0;i<5;i++)
        printf("%d%d\n",a[i],b[i]);
    for(i=0;i<5;i++)

        b[i]=a[i];

     printf("after copying elements");
     printf("%d",a[i]);
     printf("%d",b[i]);
     return 0;
}
