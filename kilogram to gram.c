#include<stdio.h>
int main()
{printf("Enter Weight in kilogram : ");// given that 1 kilogram = 1000 gram
float a,b;
scanf("%f",&a);
b=a*1000; // formula for kilogram to gram Conversion where a = weight in kilogram and b= weight in gram
printf("Weight in gram : %f kilogram*1000 = %f gram ",a,b);
return 0;
 }
