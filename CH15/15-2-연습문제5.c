#include <stdio.h>



void exchange(double *pa, double *pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	
}

void func(void(*fp)(double *, double *), double a, double b) {

	printf("a : %.1lf ,", a);
	printf("b : %.1lf\n", b);

	fp(&a, &b);

	printf("a : %.1lf ,", a);
	printf("b : %.1lf\n", b);
	
}



int main(void) {
	double a = 10, b = 20;
	func(exchange, a, b);
	return 0;
}