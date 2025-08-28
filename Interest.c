#include<stdio.h>
int main()
{
float p,r,t,i; //where p = Principal , r = Rate, t = Time in years
printf("Enter Principal,Rate,Time respectively : ");
scanf("%f %f %f",&p,&r,&t);
i = p*r*t / 100; // formula for Interest Calculation
printf("Interest = %f*%f*%f / 100 = %f ",p,r,t,i);
return 0;
}
