/* A cashier has currency of denominations 10,50,and 100, If the amount to be withdrawn to be input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.*/

#include<stdio.h>
#include<conio.h>
int main()
{

 int amt,noh,nof,not;
 printf("enter amount in hundreds");
 scanf("%d",&amt);
 noh=amt/100;
 amt=amt%100;
 nof=amt/50;
 amt=amt%50;
 not=amt/10;

 printf("\nno of 100's currency = %d",noh);
 printf("\nno of 50's currency = %d",nof);
 printf("\nno of 10's currency = %d",not);
 return 0;
}
