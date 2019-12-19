#include<stdio.h>
int main()
{
   int i,j,k,l,s;
   for(i=1;i<=5;i++)
   {
       s=1;
       for(j=i;j<5;j++)
           printf(" ");
       for(k=1;k<=i;k++)
           printf("%d",s++);
           s=s-1;
       for(l=1;l<i;l++)
           printf("%d",--s);
     printf("\n");
   }
   return 0;

}
