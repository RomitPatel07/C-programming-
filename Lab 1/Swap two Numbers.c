#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter First Number :  ");
scanf("%f",&a);
printf("Enter Second Number :  ");
scanf("%f",&b);
c=a;
a=b;
b=c;
printf("After Swaping numbers\nThe First Number = %f\nThe Second Number =%f",a,b);
return 0;
}
