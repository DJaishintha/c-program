#include<stdio.h>
int main()
{
   int age;
   char ms,gender;
   printf("enter the age, marital status(M/U),gender(M/F)");
   scanf("%d %c %c",&age,&ms,&gender);
   if(ms=='M')    //if((ms=='M')||(gender=='M'&&age>30)||(gender=='F'age>25))
        printf("\ndriver is insured");
   else if(gender=='M'&&age>30)
    printf("\n driver insured");
   else if(gender=='F'&&age>30)
    printf("\n driver insured");
   else
    printf("\n not insured");
   return 0;
}


