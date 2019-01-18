#include <stdio.h>
#include <string.h>

void init_intro(char (*intro)[80], char **pint) {
	int i;

	for (i = 0; i < 10; i++) {
		
		pint[i] = intro[i];
		
	}
	
}

int input_intro(char(*intro)[80]) {
	int cnt = 0;
	char temp[80];

	while (1) {
		printf(">인사말 입력:");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		strcpy(intro[cnt], temp);
		cnt++;

	}
	return cnt;
}

void sort_intro(char **pint, int cnt) {
	char *pt;
	int i, j;

	for (i = 0; i < cnt - 1; i++) {
		for (j = i+1; j < cnt; j++) {
			if (strcmp(pint[i], pint[j]) > 0) {
				pt = pint[i];
				pint[i] = pint[j];
				pint[j] = pt;
			}
		}
	}
}

void print_intro(int mode, void *vp, int cnt) {
	int i;
	if (mode == 1) {
		char **ppa = vp;
		printf("# 사전순으로 출력...\n");
		for (i = 0; i < cnt; i++) {
			printf("%s\n", ppa[i]);
		}
	}
	else {
		char (*ppb)[80] = vp;
		printf("# 입력순으로 출력...\n");
		for (i = 0; i < cnt; i++) {
			printf("%s\n", ppb[i]);
		}
	}

}

int main(void) {
	char intro[10][80];
	char *pint[10];
	int cnt;

	init_intro(intro, pint);
	cnt = input_intro(intro);
	sort_intro(pint, cnt);
	print_intro(1, pint, cnt);
	print_intro(0, intro, cnt);
	return 0;
}