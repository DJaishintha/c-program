#include<stdio.h>
int main()
{
    int hr,otp,i;
    i=1;
    while(i<=10)
    {
        printf("\nenter hour worked %d employee",i);
        scanf("%d",&hr);
        if(hr>40)
        {
            otp=(hr-40)*12;
            printf("\novertime pay for %d employee = %d",i,otp);

        }
        else
        {
            otp=0;
            printf("\nno overtime paid for %d employee",i);
        }
        i++;
    }
    return 0;
}
