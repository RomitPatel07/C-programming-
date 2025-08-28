#include<stdio.h>
int main()
{printf("Enter Weight in gram  : ");// given that 1 kilogram = 1000 gram
float a,b;
scanf("%f",&a);
b=a/1000; // formula for gram to kilogram Conversion where a = weight in gram and b= weight in kilogram
printf("Weight in Kilogram : %f gram /1000 = %f kilogram ",a,b);
return 0;
 }
