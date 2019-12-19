#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    (ch>=97&&ch<=122)?printf("\n %c is lower case alphabet",ch):printf("\n %c is upper case alphabet",ch);
    return 0;
}
