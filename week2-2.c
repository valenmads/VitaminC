#include <stdio.h>
int main() {
	int length = 0;
	int i;
	int capital = 0, small = 0;
	char str[] = "This Is a Sample Program";

	while (str[length++] != '\0');
	printf("���ڿ��� ���̴� %d����Ʈ �Դϴ�.\n", length - 1);

	for (i = 0; str[i] != 0; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z') {
			capital++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			small++;
		}
	}
	printf("�빮���� ���� %d �̰�, \n", capital);
	printf("�ҹ����� ���� %d �Դϴ�.", small);
	return 0;
}