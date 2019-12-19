#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("enter basic salary of the employee");
    scanf("%f",&bs);
    if(bs<1500)
    {
       hra=0.1*bs;
       da=0.9*bs;
    }
    else
    {
        hra=500;
        da=0.98*bs;
    }
    gs=hra+bs+da;
    printf("\nbasic salary = %f",bs);
        printf("\nhouse rent allowance = %f",hra);
    printf("\dearness allowance = %f",da);
    printf("\ngross salary = %f",gs);

    return 0;
}
