#include <stdio.h>
#include <string.h>

int dup_check(char(*name)[20], char temp, int cnt) {
	int a = 0, i;
	for (i = 0; i < cnt; i++) {
		if (strcmp(name[i], temp) == 0) a = 1;
	}

	return a;
}

int input_name(char(*name)[20]) {

	char temp[20];
	int cnt = 0;
	while (1) {

		printf("이름:");
		gets(temp);
		if (strcmp(temp, "end") == 0)break;
		if (dup_check(name,temp, cnt) == 1) {
			printf("# 이름이 중복되었습니다.");
			continue;
		}
		strcpy(name[cnt], temp);
		cnt++;
		if (cnt > 10) break;
	}


}

void print_name(char(*name)[20], int cnt) {

	printf("# 총 %d명이 입력되었습니다.\n", cnt);

	int i;
	for (i = 0; i < cnt; i++) {
		printf("%s\n", name);
	}
}

int main(void) {
	char name[10][20];
	int cnt;

	cnt = input_name(name);
	print_name(name, cnt);
	return 0;
}