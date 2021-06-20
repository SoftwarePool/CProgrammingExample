#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double a[]={3.9,2.4,7.7,1.1};
	double *p;
	p=a;
	printf("%f",*a);
	printf("%f",a[0]);
	printf("%f",*p);
	printf("%f \n",p[0]);
	printf("%f",p[1]);
	printf("%f", a[1]);
	return (0);
}		
