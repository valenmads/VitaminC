#include <stdio.h>
int main() {
	int length = 0;
	int i;
	int capital = 0, small = 0;
	char str[] = "This Is a Sample Program";

	while (str[length++] != '\0');
	printf("문자열의 길이는 %d바이트 입니다.\n", length - 1);

	for (i = 0; str[i] != 0; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z') {
			capital++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			small++;
		}
	}
	printf("대문자의 개수 %d 이고, \n", capital);
	printf("소문자의 개수 %d 입니다.", small);
	return 0;
}