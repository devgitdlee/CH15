#include <stdio.h>


int main(void) {
	int ary[5] = { 10,20,30,40,50 };
	void *vp = ary;

	printf("ary : %d\n", *(int *)vp+2);
	
	return 0;

}