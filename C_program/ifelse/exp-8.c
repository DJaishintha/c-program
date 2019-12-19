#include<stdio.h>
int main()
{
    int l,b,area,peri;
    printf("enter length and breadth of the rectangle");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
        printf("\narea is greater than its perimeter");
    else
        printf("\narea is not greater than its perimeter");
    return 0;

}
