#include <stdio.h> 
int main (void)
{
	int str[5];
	int i=0;
	int j=0;
	
	for(i=0; i<5; i++)
	{
	
	printf("[%d]데이터 : ", i);
	scanf("%d", &str[i]); //입력을 받아서 변수에 저장
    }
	
	printf("입력된 데이터는 ");
	
	for(j=0; j<4; j++)   
	 printf("%i,", str[j]);
	 printf("%i", str[4]);
	 
	 printf(" 입니다.");


return 0;
}
