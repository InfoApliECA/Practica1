#include "P1.h"

float ** identidad(int n) {
	int i, j;
	float ** m = (float **) malloc(n * sizeof (float *)); 
	for(i = 0; i < n; i++) {
		m[i] = (float *) malloc(n * sizeof(float));
		for(j = 0; j < n; j++)
			m[i][j] = 0.0;
		m[i][i] = 1.0;
	}
	return m;
}

void imprimirMatriz(float ** m, int tam) {
	int i, j;
	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++)
			printf("  %.1f", m[i][j]);
		printf("\n");
	}
}

void P1_E9() {
	imprimirMatriz(identidad(3), 3);
}
