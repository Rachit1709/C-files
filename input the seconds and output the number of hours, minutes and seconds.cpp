//3.	Write a program in C to input the seconds and output the number of hours, minutes and seconds.
#include <stdio.h>
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf(" hours:%d\nminutes:%d\nseconds:%d\n ",h,m,s);
	
	return 0;
}

