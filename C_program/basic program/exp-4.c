/* temperature of a city in fahrenhiet degrees is input through the keyboard. write a program to convert this temperature into centigrade*/

#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in fahrenheit");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("\ntemperature in fahrenheit = %f",f);
    printf("\ntemperature in centigrade = %f",c);
    return 0;
}
