#include "P1.h"
#include "matrices.h"

int ** producto_Escalar_Matriz(int fil, int col, int esc, int **matriz){
	int i, j;

	for( i=0; i<fil; i++ )				// filas
		for( j=0; j<col; j++ )			// columnas
			matriz[i][j] *= esc;

	return matriz;
}

void P1_E11(){
	int filas, columnas;
	double **matriz, factor;

	printf("\nProducto escalar de una matriz\nFilas: ");
	scanf("%d", &filas );

	printf("Columnas: ");
	scanf("%d", &columnas );

	matriz = CrearMatriz( filas, columnas );

	if( matriz == NULL ){
		printf("\n\nError en la creacion de la matriz");
		return EXIT_FAILURE;
	}

	LlenarMatriz( filas, columnas, matriz );

	printf("\nFactor escalar: ");
	scanf( "%f", &factor );

	producto_Escalar_Matriz( filas, columnas, factor, matriz );

	MostrarMatriz( filas, columnas, matriz );
	return EXIT_SUCCESS;

}