#include <stdio.h>
#include <string.h>

void intput_str(char(*ps)[80]) {
	int i;

	printf("다섯 개의 문장을 입력하세요.\n");
	for(i=0;i<5;i++){
		gets(ps[i]);
	}

}

void output_str(char(*ps)[80]) {

	int i;
	printf("입력된 문장은...\n");
	for (i = 0; i < 5; i++) {
		printf("%s\n", ps[i]);
	}
}

int main(void) {
	char **str[5][80];
	
	intput_str(str);
	output_str(str);

	return 0;

}