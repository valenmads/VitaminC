#include <stdio.h>
int main(void) 
{
	int str[5];
	int i=0;
	int j;
	int k;
	
	while(1)
	{
	printf("[%d]������ : ", i);
	scanf("%d", &str[i]);
	
	if(str[i]>=0 && str[i]<=100)
		{
		i++; 
	 if (i>=5)
	 break;
        }
	else 
	{
	printf("��ȿ���� ���� �������Դϴ�. �ٽ� �Է��ϼ���. \n");
	 }
}
    for(j=0; j<5; j++)
    	{
		printf("[%d] ",j);
    	{
    		for (k=1; k<=str[j]/10; k++) 
    		printf("��");
        }
		
		printf("(%d)\n", str[j] ); 
}
 
	 return 0;

}
