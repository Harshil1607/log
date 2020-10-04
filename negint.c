#include <stdio.h>
#include <stdint.h>

void bin(unsigned n);

void main() {
	uint8_t no  = -128;
	uint8_t pno = 128;

	printf("positive no %d binary -> ", pno);
	bin((int8_t)pno); 
	printf("\n");
	printf("negative no %d binary -> ", (int8_t)no);
	bin((int8_t)no);
	printf("\n");

}

void bin(unsigned n) 
{ 
    unsigned i; 
    for (i = 1 << 7; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
} 

