/*20225220 �̿���*/
#include <stdio.h>
int main(void)
{
	int num[5];
  int a, i, j;

	printf("���ڸ� �Է��Ͻÿ�>>");
	
	for(a=0; a<5; a++)
	{
		scanf("%d", &num[a]); 
	}
	for (i=0; i<5; i++)
	{
		printf("[%d]", i+1);
		
		{
			for (j=1; j<= num[i]/1000; j++)
			{
				printf("�� ");
				
			}
			printf("(%d) \n", num[i]);
		}
	}
	return 0;
}
