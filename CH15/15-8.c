#include <stdio.h>

void func(int(*fp)(int, int)) {
	int a, b;
	int res;

	printf("두 정수값을 입력하세요: ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);
}

int sum(int a, int b) {
	return (a + b);
}

int mul(int a, int b) {
	return (a * b);
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main(void) {
	int sel;

	printf("1. 두 정수의 합\n");
	printf("2. 두 정수의 곱\n");
	printf("3. 두 정수 중에서 큰 값 계산\n");
	printf("원하는 작업을 선택하세요 :");

	scanf("%d", sel);
	switch (sel) {
		case 1: func(sum); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}

	return 0;
}