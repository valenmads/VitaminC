#include <stdio.h>
int main(void) 
{
	int str[5];
	int i=0;
	int j;
	int k;
	
	while(1)
	{
	printf("[%d]데이터 : ", i);
	scanf("%d", &str[i]);
	
	if(str[i]>=0 && str[i]<=100)
		{
		i++; 
	 if (i>=5)
	 break;
        }
	else 
	{
	printf("유효하지 않은 데이터입니다. 다시 입력하세요. \n");
	 }
}
    for(j=0; j<5; j++)
    	{
		printf("[%d] ",j);
    	{
    		for (k=1; k<=str[j]/10; k++) 
    		printf("■");
        }
		
		printf("(%d)\n", str[j] ); 
}
 
	 return 0;

}
