#include<stdio.h>
#include<conio.h>
int main()
{
    int a[7],i,flag=0,item;
    printf("Enter the elements of array:");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("Array elements are:");
    for(i=0;i<7;i++)
        printf("%d",a[i]);
    printf("\nEnter the item to be searched:");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("item is found at %d position",i+1);
    else
        printf("item not found");
    return 0;
}
