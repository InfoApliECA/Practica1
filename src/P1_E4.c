#include "P1.h"

char *dia_de_la_semana( int d ){
	switch(d){
	case 1:
		return "Lunes";
		
	case 2:
		return "Martes";
		
	case 3:
		return "Miercoles";

	case 4:
		return "Jueves";

	case 5:
		return "Viernes";

	case 6:
		return "Sabado";

	case 7:
		return "Domingo";

	default:
		return NULL;
	}
}


void P1_E4(){
	int dia;
	char *p;

	printf("\nIngrese el numero de dia (1-7)");
	scanf("%d", &dia);

	p = dia_de_la_semana( dia );
	if( p != NULL )
		printf("%s", p);

	else printf("\nError");
	return;
}