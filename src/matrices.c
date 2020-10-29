#include "P1.h"

/*
 * Funciones de manipulacion de matrices de reales
 */

double ** CrearMatriz( int filas, int columnas ){
	int i;
	double **matriz;

	matriz = (double **) malloc( filas * sizeof( double *));

	if (matriz == NULL)
		return matriz;

	for( i=0; i < columnas; i++ ){
		matriz[i] = malloc( sizeof( double ));
		if ( matriz[i] == NULL ){
			free( matriz );
			matriz = NULL;
		}
	}
	return matriz;
}

void LlenarMatriz( int filas, int columnas, double **matriz ){
	int i, j;
	double valor;

	for( i=0; i < filas; i++ ){
		for( j=0; j < columnas; j++ ){
			printf("Valor [%d][%d]:", i, j);
			scanf( "%f", &valor );
			matriz[i][j] = valor;
		}
	}
	return;
}

void MostrarMatriz( int filas, int columnas, double **matriz ){
	int i, j;

	for( i=0; i< filas; i++ ){
		for( j=0; j < columnas; j++ )
			printf("%f ", matriz[i][j]);
		printf("\n");
	}
	return;
}