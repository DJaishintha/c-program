#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,s1,s2,s3;
    printf("enter the three points of x and y ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    s1=abs(y2-y1)/abs(x2-x1);
    s2=abs(y3-y1)/abs(x3-x1);
    s3=abs(y3-y2)/abs(x3-x2);
    if((s1==s2)&&(s2==s3))
        printf("\n the points are on straight line");
    else
        printf("\nthe points are not on straight line");
    return 0;

}
