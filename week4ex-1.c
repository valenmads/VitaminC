#include <stdio.h> 
int main (void)
{
	int str[5];
	int i=0;
	int j=0;
	
	for(i=0; i<5; i++)
	{
	
	printf("[%d]������ : ", i);
	scanf("%d", &str[i]); //�Է��� �޾Ƽ� ������ ����
    }
	
	printf("�Էµ� �����ʹ� ");
	
	for(j=0; j<4; j++)   
	 printf("%i,", str[j]);
	 printf("%i", str[4]);
	 
	 printf(" �Դϴ�.");


return 0;
}
