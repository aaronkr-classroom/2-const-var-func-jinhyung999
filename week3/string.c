//string.c
#include <stdio.h>
#include <string.h>

int main() {
	const char* GREETING = "Hello World!~";

	printf("문자열의 문자와 null 문자도 출력:\n");

	for (int i = 0; i <= strlen(GREETING); i++) {
		if (GREETING[i] == '\0') {
			printf("\\0");//\0만하면 아무것도안나오고 null을하고싶으면 \\0
		}
		else {
			printf("%c", GREETING[i]);
		}
		printf(" (ASCII: %d)\n", GREETING[i]);
	}
	return 0;
}