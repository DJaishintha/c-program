/* Write a C program to enter two angles of a triangle and find the third angle.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter two angles of a triangle : ");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("\n%d is the third angle",c);
    return 0;
}
