#include<stdio.h>
int main()
{printf("Enter Time in Hour : ");
float a,b;
scanf("%f",&a);
b=a*60; // formula for Hour to Minutes
printf("Time in Minutes : %f hour * 60=%f minutes ",a,b);
return 0;
 }
