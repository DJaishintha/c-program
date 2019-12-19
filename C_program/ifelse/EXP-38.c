#include<stdio.h>
int main()
{
    int yos,qual,PG=1,G=0,sal;
    char gender;
    printf("enter the yos,qual(0=graduate/1=post graduate),gender");
    scanf("%d %d %c",&yos,&qual,&gender);
    if(gender=='M'&&yos>=10&&qual==1)
    {
        if(gender=='M'&&yos>=10&&qual==1)
            sal=15000;
        else if((gender=='M'&&yos>=10&&qual==0)||(gender=='M'&&yos<10&&qual==1))
            sal=10000;
        else if(gender=='M'&&yos<10&&qual==0)
            sal=7000;

    }
    else
    {
        if(gender=='F'&&yos>=10&&qual==1)
          sal=12000;
        else if(gender=='F'&&yos>=10&&qual==0)
            sal=9000;
        else if(gender=='F'&&yos<10&&qual==1)
            sal=10000;
        else if(gender=='F'&&yos<10&&qual==0)
            sal=6000;

    }
    printf("\nsalary = %d",sal);
    return 0;

}
