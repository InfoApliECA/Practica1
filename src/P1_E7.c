#include "P1.h"

int miItoa(int num, int base, char * buffer) { // base = 2, 8 ó 10
	int i = 0;
	int cociente = num;
	while(cociente > (base - 1)) {
		buffer[i++] = cociente%base + (cociente%base > 9 ? 'A' - 10 : '1' - 1);
		cociente /= base;
	}
	buffer[i++] = cociente + (cociente%base > 9 ? 'A' - 10 : '1' - 1);
	buffer[i] = '\0';
	return i;
}

void P1_E7() {
	int i;
	char palabra [40];
	char * pal;
	int len = miItoa(1234, 16, palabra);
	pal = (char *) malloc(len);
	printf("\n\n");
	pal[len] = palabra[len];
	for(i = len - 1; i >= 0; i--) pal[len - 1 - i] = palabra[i];
	printf("%s", pal);
	printf("\n\n");
}
