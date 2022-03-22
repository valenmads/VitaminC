#include <stdio.h>
void main(void){
	
	char he[6];
	int i;
	
	he[0] = 'h';
	he[1] = 'e';
	he[2] = 'l';
	he[3] = 'l';
	he[4] = 'o';
	he[5] = 0;
	
	for(i = 0; i<5; i++)
	  printf("%c", he[i]);
	  printf("\n");
	  
	  printf("%s", he);
	}
