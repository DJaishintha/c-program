#include<stdio.h>
int main()
{
    int qty,dis;
    float price,tot;
    printf("enter quantity and price : ");
    scanf("%d%f",&qty,&price);
    if(qty>1000)
        dis=10;
    tot=(qty*price)-(qty*price*dis/100);
    printf("total expenses = %0.2f",tot);
    return 0;
}
