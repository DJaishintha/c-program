#include<stdio.h>
int main()
{
    int y;
    printf("enter year");
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
            printf("\n %d is leap year",y);
        else
            printf("\n %d is not a leap year",y);
    }
    else
    {
        if(y%4==0)
            printf("\n %d is a leap year",y);
        else
            printf("\n %d is not a leap year",y);

    }
    return 0;
}
