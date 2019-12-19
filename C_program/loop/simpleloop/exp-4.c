#include<stdio.h>
int main()
{
    int ch;
    ch=0;
    while(ch<=255)
    {
        printf("\n%d\t%c",ch,ch);
        ch++;
    }
    return 0;
}
