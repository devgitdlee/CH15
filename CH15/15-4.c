#include <stdio.h>

int main(void) {
	int ary[5];

	printf("ary�� �� : %u\n", ary);
	printf("ary�� �ּ� : %u\n", &ary);

	printf("ary + 1�� �� : %u\n", ary+1);
	printf("ary + 1�� �ּ� : %u\n", &ary+1);


	return 0;
}