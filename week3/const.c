#include <stdio.h>

int main(void) {
	//���ڻ��
	const int DAYS_IN_WEEK = 7;//4bytes
	const float PI = 3.14159f;//4bytes
	const double GRAVITY = 9.80665;//8bytes

	//���� ���
	const char LETTER_A = 'A';
	const char NEW_LINE = '\n';
	const char TAB = '\t';
	
	//���ڿ� ���
	const char* GREETING = "Hello World!~";

	//��� ���
	printf("������ ���: %c", NEW_LINE);
	printf("�������� �� : %d%c", DAYS_IN_WEEK , NEW_LINE);
	printf("�� ������ ����: 12inch * %.5f%c",PI , NEW_LINE);
	printf("�߷�: %.5fm/s^2%c",GRAVITY,NEW_LINE);

	//���ڻ�� ���
	printf("%c%c%c%c%c%c", LETTER_A, TAB, LETTER_A, TAB, LETTER_A,NEW_LINE);

	printf("%s%c", GREETING, NEW_LINE);

	return 0;
}