#include<stdio.h>
int main()
{printf("Enter Money in Rupee  : ");// given that 1$ = 48 rupee
float a,b;
scanf("%f",&a);
b=a/48; // formula for Rupee to Dollar Conversion where a = money in Rupee and b= money in Rupee
printf("Money in Dollar : %f Rupee / 48 = %f Dollar ",a,b);
return 0;
 }
