#include<stdio.h>
int main()
{
float c,f;
printf("Enter Temperature in Celsius : ");
scanf("%f",&c);
f=(9*c/5)+32; // formula for Conversion of Celsius to Fahrenheit
printf("Temperature in Fahrenheit : 9 * %f Celsius /5 = %f Fahrenheit",c,f);
}
