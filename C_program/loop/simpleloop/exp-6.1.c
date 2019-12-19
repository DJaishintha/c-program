/*odd loop runs according to the users requirement*/
#include<stdio.h>
int main()
{
    int pos=0,neg=0,zero=0,num;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
        printf("enter value of num");
        scanf("%d",&num);
        if(num>0)
            pos++;
        if(num<0)
            neg++;
        if(num==0)
            zero++;
        printf("do you want to enter more numbers for yes press y");
        scanf(" 4
              4%c",&ans);
    }
    printf("\nno of zero =%d",zero);
    printf("\nno of positive num =%d",pos);
    printf("\nno of negative num =%d",neg);
    return 0;
}
