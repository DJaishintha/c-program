#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    printf("enter an alphabet");
    scanf("%c",&ch);
    ch1=tolower(ch);
    if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
        printf("\n%c is vowel",ch1);
    else
        printf("\n%c is consonant",ch1);
    return 0;
}
