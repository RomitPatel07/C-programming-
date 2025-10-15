
float#include<stdio.h>
int main()
{ h,a,A;// a= side length of triangle , h = height of triangle
printf("Enter height and side length of triangle in meter : ");
scanf("%f %f",&h,&a);
A=h*a/2;
printf("Area of Triangle =%f meter * %f meter /2 = %f meter^2 ",h,a,A);// area of Triangle = h*a/2
return 0;
}
