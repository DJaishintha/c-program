#include<stdlib.h>
int main()
{
    int choice,n,f=1,i;
    while(1)
    {
        //system("cls");
        printf("\n\t\tMENU\t\t");
        printf("\n1.factorial");
        printf("\n2.prime or not");
        printf("\n3.even or odd");
        printf("\n4.exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter value of n:");
            scanf("%d",&n);
             for(i=1;i<=n;i++)
                f=f*i;
             printf("%d is the factorial of %d",f,n);
            break;
        case 2:
            printf("enter value of n");
            scanf("%d",&n);
            for(i=2;i<n;i++)
            {
                if(n%i==0)
                  break;
            }
            if(i==n)
                printf("%d is prime no",n);
            else
                printf("%d is not a prime no",n);
            break;
        case 3:
            printf("enter value of n");
            scanf("%d",&n);
            if(n%2==0)
              printf("%d is even no",n);
            else
              printf("%d is odd no",n);
            break;
        case 4: exit(0);
        default:
            printf("enter right choice");
        }
    }
    return 0;
}
