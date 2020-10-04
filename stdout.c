#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
	
	char *sens_buffer = "1797.7 -21.8 660\rg";
	char *end;
   	
	float vwc = strtof(sens_buffer, &end);
	float temperature = strtof(end, &end);
	float dielect = strtof(end, NULL);
	
	printf("\n");
	printf("sens_buffer [%s]", sens_buffer);
	
	printf("\nbuffer size %d", strlen(sens_buffer));
	printf("\n");
	printf("vwc [%.1f], temperature [%.1f], dielectricity [%.0f]\n", vwc, temperature, dielect);
}
