/* The distance between two cities(in km) is input through  the keyboard. write the program to convert and print this distance in meters,feet,inches and centimeters*/


#include<stdio.h>
int main()
{
    float km,m,cm,f,inc;
    printf("enter distance in km");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inc=cm/2.54;
    f=inc/12;
    printf("\ndistance in km = %f",km);
    printf("\ndistance in m = %f",m);
    printf("\ndistance in cm = %f",cm);
    printf("\ndistance in inches = %f",inc);
    printf("\ndistance in feet = %f",f);
    return 0;
}
