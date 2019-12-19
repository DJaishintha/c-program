/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. write a program to calculate the area and perimeter of the rectangle ,
and the area and circumference of the circle.*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int l,b,r,rarea,peri;
  float carea, circum;
  printf("length :");
  scanf("%d",&l);
  printf("breadth :");
  scanf("%d",&b);
  printf("radius :");
  scanf("%d",&r);
  rarea=l*b;
  peri=2*(l+b);
  carea=3.14*r*r;
  circum=2*3.14*r;
  printf("\narea of the rectangle = %d",rarea);
  printf("\nperimeter of the rectangle = %d",peri);
  printf("\narea of the circle = %f",carea);
  printf("\ncircumference of the circle = %f",circum);
  return 0;
}
