#include <stdio.h> //c�� string�� ��� �迭�� �ʿ� , �ΰ� �̻��̸� ������ 2���� �迭�̾�. ������ ��. ���� ������ �� ���̰� ���� �� ��.  
 char msg[] = "Hello";
 void main() {
 	char abc[] [9] = { "������",
	                   "�踶����",
					   "�Ҿ�"}; 
	int i;
	
	for (i=0; i<3; i++)
	           printf("%s %s\n", msg, abc[i]);
			   printf("\n"); 
 } 
 
 
