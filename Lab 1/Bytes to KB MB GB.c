#include<stdio.h>
int main()
{printf("Enter Size in bytes : ");// given that 1 KB  = 1024 bytes
float a,b,c,d;
scanf("%f",&a);
b=a/1024; // formula for bytes to KB Conversion where a = size in byte and b= size in KB
printf("\nSize in KB : %f byte / 1024 = %f KB ",a,b);
c=b/1024; // formula for KB to MB Conversion where b = size in KB and c= size in MB
printf("\nSize in MB : %f KB / 1024 = %f MB ",b,c);
d=c/1024; // formula for GB to MB Conversion where c = size in MB and d= size in GB
printf("\nSize in GB : %f MB / 1024 = %f GB ",c,d);
return 0;
 }
