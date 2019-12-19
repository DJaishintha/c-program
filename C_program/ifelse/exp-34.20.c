#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
       printf("\n %c is a character",ch);
    else if(ch>='0'&&ch<='9')
        printf("\n %c is digit",ch);
    else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
        printf("\n %c is special symbol",ch);
    return 0;
}
