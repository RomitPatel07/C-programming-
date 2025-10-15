#include<stdio.h>
int main()
{
int a,b;// a= length of the size of Rectangle
printf("Enter length and breadth of Rectangle respectively : ");
scanf("%d %d",&a,&b);
printf("Perimeter of Rectangle = %d",2*(a+b));// perimeter of Rectangle = 2*(a+b)
printf("\nArea of Rectangle = %d",a*b);// area of Rectangle = a*b
return 0;
}
