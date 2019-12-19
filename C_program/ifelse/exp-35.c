#include<stdio.h>
int main()
{
    int nod;
    printf("enter no of late days");
    scanf("%d",&nod);
    if(nod>=1&&nod<=5)
        printf("fine = %f",nod*0.5);
    else if(nod>=6&&nod<=10)
        printf("fine = %f",nod*1.00);
    else if(nod>=10&&nod<=30)
        printf("fine = %f",nod*5.00);
        else
            printf("your membership is cancelled");
    return 0;
}
