#include<stdio.h>
int main()
{
    int sp,cp,l,p;
    printf("enter selling price and cost price");
    scanf("%d%d",&sp,&cp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
        printf("profit = %d",p);
    else if(l>0)
        printf("loss = %d",l);
    return 0;
}
