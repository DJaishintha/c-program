#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    char grade;
    printf("enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5.0;
    printf("\npercentage = %%f",per);
    if(per>=90)
        grade='A';
    else if(per>=80)
        grade='B';
    else if(per>=70)
        grade='C';
    else if(per>=60)
        grade='D';
    else if(per>=40)
        grade='E';
    else
        grade='F';
    printf("\ngrade=%c",grade);
    return 0;
}
