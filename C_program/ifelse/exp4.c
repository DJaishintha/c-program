#include<stdio.h>
int main()
{
    int jy,cy,yos,bonus;
    printf("enter joined and current year :");
    scanf("%d%d",&jy,&cy);
    yos=cy-jy;
    if(yos>3)
        bonus=2500;
    printf("bonus of the employee is %d",bonus);
    return 0;

}
