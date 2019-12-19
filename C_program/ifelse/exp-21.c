#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("\n%c is uppercase",ch);
    else if(ch>=97&&ch<=122)
        printf("\n%c is lowercase",ch);
    return 0;
}
