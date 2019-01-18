#include <stdio.h>
#include <string.h>


void swap(char *str, void *a, void *b) {
	int temp;
	double dtemp;
	if (strcmp(str, "int") == 0) {
		temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else
	{
		dtemp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = dtemp;
	}

}

int main(void) {
	int a, b;
	double da, db;
	printf("첫 번째 사람의 나이와 키 입력:");
	scanf("%d%lf", &a, &da);
	printf("두 번째 사람의 나이와 키 입력:");
	scanf("%d%lf", &b, &db);
	printf("\n");
	swap("int", &a, &b);
	swap("double", &da, &db);

	printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", a, da);
	printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", b, db);
	return 0;
}