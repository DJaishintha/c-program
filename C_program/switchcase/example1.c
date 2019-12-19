#include<stdio.h>
int main()
{
    char ch;
    printf("enter alphabets a,b or c:\n");
    scanf("%c",&ch);
    switch(ch)
    {
       case 'a':
       case 'A':
        printf("The letter is 'a'");
        break;
       case 'b':
       case 'B':
        printf("The letter is 'b'");
        break;
       case 'c':
       case 'C':
        printf("The letter is 'c'");
        break;
       default:
        printf("no match");
    }
    return 0;
}
