#include<stdio.h>
int main()
{
    int age;
    char ms,gender;
    printf("enter the age , marital status(M/U),gender(M/F)");
    scanf("%d %c %c",&age,&ms,&gender);
    if(ms=='M')

        printf("\nthe driver is insured");

    else

    {
        if(gender=='M')
        {
            if(age>30)
            printf("\ndriver insured");
            else
            printf("\ndriver not insured");

        }
        else
        {
            if(age>25)
                    printf("\ndriver insured");
                else
                    printf("\ndriver not insured");


        }



    }


return 0;
}
