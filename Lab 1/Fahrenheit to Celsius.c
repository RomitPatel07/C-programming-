#include<stdio.h>
int main()
{
float f,c;
printf("Enter Temperature in Fahrenheit : ");
scanf("%f",&f);
c = 5*(f-32)/9; // formula for Conversion of Fahrenheit to Celsius
printf("Temperature in Celsius : 5 * (%f Fahrenheit - 32) / 9 = %f Celsius",f,c);
return 0;
}
