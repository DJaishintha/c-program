#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        printf("\n %c is an alphabet",ch);
        else
            printf("\n %c is not an alphabet",ch);
        return 0;

}
