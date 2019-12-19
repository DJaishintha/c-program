#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        switch(ch)
        {
           case 'a':
           case 'A':
           case 'e':
           case 'E':
           case 'i':
           case 'I':
           case 'O':
           case 'o':
           case 'u':
           case 'U':
               printf("%c is a vowel",ch);
               break;
           default:
            printf("%c is a consonant",ch);
        }
    }
        else
            printf("invalid character");

    return 0;
}
