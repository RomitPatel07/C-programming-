#include<stdio.h>
int main()
{printf("Enter Money in Dollar  : ");// given that 1$ = 48 rupee and 1 pound = 70 rupees
float a,b;
scanf("%f",&a);
b=a*48/70; // formula for Dollar to Pound Conversion where a = money in Dollar and b= money in pound
printf("Money in Pound  : %f Dollar * 48/70 = %f pound  ",a,b);
return 0;
 }
