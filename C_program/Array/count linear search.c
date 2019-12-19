#include<stdio.h>
#include<conio.h>
int main()
{
    int a[7],i,item,count=0;
    printf("Enter the elements of array:");
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    printf("Enter item to be searched:");
      scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
            count++;
    }
    if(count>0)
        printf("item found %d times",count);
    else
        printf("item not found");
    return 0;
}
