#include <stdio.h>
char msg[] = "Hello";
void main() {
	static char abc[] ={'h','e','e'}; //�迭�ʱ�ȭ�� static Ű����. ó�� �ѹ��� �аڴ�. ȣ�⸶�� �ʱ�ȭ ���� �ϴ°� �ƴϰ�. 
	int i;
	
	printf("%s \n", msg); //hello ��� ����ϰ� ���ð���. �����迭�̴ϱ�. 
	
	for(i=0; i<3; i++)
	
	 printf("%c", abc[i]); //hee ��Ȯ�ϰ� ���ð��̴�. 
	 printf("\n");
	 
	 printf("%s \n",abc); //null ���� ������ �ȵƴ�.  �� static Ű����� ���� hee�� ��µȴ�.  
	}
