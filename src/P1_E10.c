#include "P1.h"
#include "matrices.h"

double determinante_Matriz(int tam, double **matriz){
	if( tam == 2 )
		return( matriz[0][0] * matriz[1][1] - matriz[1][2] * matriz[2][1]);

	if(tam = 3)
		return( matriz[1][1] * matriz[2][2] * matriz[3][3] + 
				matriz[1][2] * matriz[2][3] * matriz[3][1] + 
				matriz[1][3] * matriz[2][1] * matriz[3][2] -
				matriz[1][3] * matriz[2][2] * matriz[3][1] - 
				matriz[1][2] * matriz[2][1] * matriz[3][3] - 
				matriz[1][1] * matriz[2][3] * matriz[3][2]
		);

}

void P1_E10(){
	/*
	 *	Asumimos matriz cuadrada
	 */
	int dimension;

	printf("Calculo del determinante de una matriz cuadrada (orden 2 o 3)\n");


	return;



}