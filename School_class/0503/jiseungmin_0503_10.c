#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char title[20]; //신청 과목 이름
	int score;
}ST;

int main(void) {
	ST* t_zone;
	int cnt, sum = 0;

	t_zone = (ST*)malloc(sizeof(ST) * 2); // 동적 메모리 할당
	
	if (t_zone == NULL) {
		printf("동적 메모리 할당 오류 발생 \n");
		exit(1);
	}
	printf("신청 과목 : ");
	gets_s(t_zone[0].title, sizeof(t_zone[0].title));
	printf("신청 학점 : ");
	scanf_s("%d", &(t_zone[1].score));
	printf("%s %d학점을 신청하였습니다.\n", t_zone[0].title, t_zone[1].score);

	free(t_zone);
	return 0;
}