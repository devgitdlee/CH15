#include <stdio.h>

int main(void) {
	int a = 10, b = 20;
	int *pa = &a, *pb = &b;

	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	
	printf("%d, %d\n", *pa, *pb);

	return 0;
}