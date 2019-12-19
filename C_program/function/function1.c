/*no argument & no return value*/
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a=10,b=20,s;
    s=a+b;
    printf("addition=%d",s);
}
