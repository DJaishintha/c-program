#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the age of ram,shyam,and ajay");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
        printf("\nyoungest is ram");
    else if(b<a&&b<c)
        printf("\nyoungest is shyam");
    else if(c<a&&c<b)
        printf("\nyoungest is ajay");
    return 0;
}
