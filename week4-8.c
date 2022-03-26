#include <stdio.h> //c는 string이 없어서 배열이 필요 , 두개 이상이면 무조건 2차원 배열이야. 각각이 행. 열은 데이터 중 길이가 가장 긴 것.  
 char msg[] = "Hello";
 void main() {
 	char abc[] [9] = { "김은주",
	                   "김마리아",
					   "소양"}; 
	int i;
	
	for (i=0; i<3; i++)
	           printf("%s %s\n", msg, abc[i]);
			   printf("\n"); 
 } 
 
 
