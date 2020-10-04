#include <stdio.h>
#include <stdint.h>
#include <string.h>

void cast(void *buffer, void *cpybuff);

void cast(void *buffer, void *cpybuff) {
	
	char *buff = buffer;
	char *cpbuff = cpybuff;

	int len = strlen(buff);
	printf("len of string %d\nbuffer-> ", len);
	
	for(int i = 0; i < len; i++) {
		printf("%c ", buff[i]);
		cpbuff[i] = buff[i];
	}
	printf("\n");
}

int main(void) {
	int *no = 0; 
	*no = 2056;
	int *no2 = 0;
	
	cast(no, no2);
	//for(int i = 0;  i < 2; i++)
	printf("%d\n", *no2);
return 0;
}
