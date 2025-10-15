#include<stdio.h>
int main()
{
float g;
printf("Enter Gross Salary in Rs : ");
scanf("%f",&g);
printf("Net salary = %f Rs + (0.1 * %f) Rs - (0.03* %f) Rs = %f Rs", g,g,g,g+(g*0.1)-(g*0.03));
return 0;
}
