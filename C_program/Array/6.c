#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,even=0,odd=0;
    printf("Enter the value of array:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Array elements are:");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\neven=%d",even);
    printf("\nodd=%d",odd);
    return 0;
}

