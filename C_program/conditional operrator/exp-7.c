#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    (ch>=0&&ch<=127)?printf("\n %c is a symbol",ch):printf("\n %c is not a symbol",ch);
    return 0;
}
