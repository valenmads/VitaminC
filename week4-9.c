#include <stdio.h>
void main() {
	char dec[10];
	
	eCopy("Hello", dec);
	printf("복사된 내용: %s \n", dec);

 }
 
 void eCopy(char soc[], char desc[])
 {
 	int i;
 	
 	for(i=0; soc[i]; i++)
 	desc[i] = soc[i];
 	desc[i] = 0;
 }
