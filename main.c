#include <stdio.h>

int main(void)
{
	int a, b;
	printf("분자를 입력하시오 : ");
	scanf("%d", &a);
	printf("분모를 입력하시오 : ");
	scanf("%d", &b);
	
	printf("나누기의 결과는 %f 입니다\n", (float)a/b);
	
	return 0;
}
