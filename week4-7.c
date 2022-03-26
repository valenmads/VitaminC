#include <stdio.h>
char msg[] = "Hello";
void main() {
	static char abc[] ={'h','e','e'}; //배열초기화에 static 키워드. 처음 한번만 읽겠다. 호출마다 초기화 실행 하는게 아니고. 
	int i;
	
	printf("%s \n", msg); //hello 라고 깔끔하게 나올것임. 전역배열이니까. 
	
	for(i=0; i<3; i++)
	
	 printf("%c", abc[i]); //hee 정확하게 나올것이다. 
	 printf("\n");
	 
	 printf("%s \n",abc); //null 값이 적용이 안됐다.  흠 static 키워드로 인해 hee로 출력된다.  
	}
