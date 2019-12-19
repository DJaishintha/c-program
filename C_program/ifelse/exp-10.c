#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("enter five subject marks out of 100\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=60)
        printf("first div");
    else
    {
        if(per>=50)
            printf("second div");
        else
        {
            if(per>=40)
                printf("third div");
            else
                printf("fail");
        }
    }
    return 0;

}
