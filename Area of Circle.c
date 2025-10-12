#include<stdio.h>
int main()
{
float r,A;
printf("Enter Radius of Circle in meter : ");
scanf("%f",&r);
A=22*r*r/7;// area of Circle where A= area and r = radius
printf("Area of Circle = 22/7 *%f meter *%f meter = %f meter^2 ",r,r,A);
return 0;
}
