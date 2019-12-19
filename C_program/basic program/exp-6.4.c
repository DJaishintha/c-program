/* Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents C and D using third variable and without using arithmetic operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,d;
    printf("enter the value of C and D:");
    scanf("%d%d",&c,&d);
    printf("value before interchange\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    c=c^d;
    d=c^d;
    c=c^d;
    printf("value after interchange\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    return 0;
}
