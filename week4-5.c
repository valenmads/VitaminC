#include <stdio.h>
void main(char str[])
{
	printf("%s\n", str);
}



/*char str[]의 의미는  char str []="hello" 초기화된걸 ()에 올림 반드시 초기값 있어야함.
 호출할 때 초기값이 같이 입력되므로 사용자 함수를 정의하는 단계에서 배열의 크기는 안써도된다.  
 main("hello") 초기화 값이 되어서 음... char str[] 자동으로 그 길이 계산. 자동으로 %s에서 데이터값 출력. */
