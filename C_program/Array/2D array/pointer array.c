#include<stdio.h>
#include<conio.h>
int main()
{int a[5]={2,4,6,8,10};
int i;
for(i=0;i<5;i++)
{
   printf("\naddress=%u address=%u",(a+i),(i+a));
   printf("\nvalue=%d value=%d",*(a+i),*(i+a));
   printf("\nvalue=%d value=%d",a[i],i[a]);
   printf("\n");
}
return 0;
}
