#include<stdio.h>
int main()
{printf("Enter Money in Dollar  : ");// given that 1$ = 48 rupee
float a,b;
scanf("%f",&a);
b=a*48; // formula for Dollar to Rupee Conversion where a = money in Dollar and b= money in Rupee
printf("Money in Rupee : %f Dollar * 48 = %f rupee ",a,b);
return 0;
 }
