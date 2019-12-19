/* Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents C and D using third variable,*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,d,temp;
    printf("enter the value of C and D:");
    scanf("%d%d",&c,&d);
    printf("value before interchange\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    temp=c;
    c=d;
    d=temp;
    printf("value after interchange\n");
    printf("C=%d\n",c);
    printf("D=%d\n",d);
    return 0;
}
