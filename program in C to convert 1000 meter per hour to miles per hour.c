//2.	Write a program in C to convert 1000 meter per hour to miles per hour.
#include <stdio.h>
float mph;              

float m;
int main()
{
	printf("Input meter per second: ");
	scanf("%f", &mph);
	mph = (m =mph * 0.000621371);
	printf("%f miles per hour\n", mph);
              return(0);}

