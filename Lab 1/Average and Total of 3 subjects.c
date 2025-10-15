#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,A,T;
printf("Enter marks obtain in three different subjects : ");
scanf("%d%d%d",&a,&b,&c);
A =(a+b+c)/3;
printf("average of 3 subjects = %d marks",A);
T =a+b+c;
printf("\nTotal of 3 subjects = %d marks",T);
return 0;
getch();
}
