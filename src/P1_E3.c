#include "P1.h"

int P1_E3(){
	int cant, i;
	float *I ,*dir;
//	float **PP;
	
	printf(" cantidad de Reales a ingresar\n");
	scanf("%d",&cant);
	
	I =(float*)malloc(sizeof(float)*cant); // mas prolijo
	if( I==NULL){
		printf("No se pudo reservar memoria para el arreglo");
		return -1;
	}

	for (i=0;i<cant;i++){
		printf("ingresar Real\n");
//		scanf("%f",&I[i]);
		scanf("%f",(I+i));
		printf("dato ingresado: I[%d]: %.2f \n",(i), *(I+i));
	}
	printf(" Reales a ingresados en orden inverso:\n");
	for (i=0;i<cant;i++)
		printf(" I[%d]: %.3f \n",(cant-1-i), *(I+cant-1-i));

	printf(" Nuevamente orden inverso:\n");
	
//	dir=I+cant;
	for (dir=(I+cant-1);dir>=I;dir--)
		printf(" I[%d]: %.1f \n",(dir-I), *(dir));
	
	return 0;
}
