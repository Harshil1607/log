#include <stdio.h>
#include <stdint.h>

#define TEROS11    11


void calling(uint8_t *type);

void main() {
	calling(&TEROS11);
}

void calling(uint8_t *type) {
	printf("constant is %d\n", type);
}
