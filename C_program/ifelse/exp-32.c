
#include<stdio.h>
int main()
{
    int a;
    float t,amt,sur;
    printf("enter electricity unit charges");
    scanf("%d",&a);
    if(a<=50)
        amt=a*0.50;
    else if(a<=150)
        amt=(50*0.5)+((a-50)*0.75);
    else if(a<=250)
        amt=(50*0.5)+(100*0.75)+((a-150)*1.20);
    else
        amt=(50*0.5)+(100*0.75)+(100*1.20)+((a-250)*1.50);
    sur=amt*20/100;
    t=amt+sur;
    printf("\namount= %f",amt);
    printf("\nsurcharge = %f",sur);
    printf("\ntotal electricity bill = %f",t);
    return 0;


}
