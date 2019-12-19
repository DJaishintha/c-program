#include<stdio.h>
int main()
{
    int bs,gs,hra,da;
    printf("enter basic salary");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=bs*0.2;
        da=bs*0.8;
            gs=hra+bs+da;
    }

    else if(bs<=20000)
       {
           hra=bs*0.25;
         da=bs*0.9;
             gs=hra+bs+da;
       }
    else
         {
             hra=bs*0.3;
         da=bs*0.95;
    gs=hra+bs+da;
         }
    printf("\ngross salary = %d",gs);
    return 0;

}
