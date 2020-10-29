#include "P1.h"
#include "ClasificarCodigos.h"



void P1_E12(){
	char id[80];

	getchar();

	do {
		printf("\nIngrese identificador (Intro para salir): ");
		gets( id );
		if( strlen( id ) == 0 )
			break;

		if( EsEmail( id ) ){
			printf("\n%s es una direccion de e-mail", id );
			continue;
		}

		if( EsIP( id )){
			printf( "\n%s es una direccion IP", id );
			continue;
		}


		if( EsTarjeta( id ) ){
			printf( "\n%s es un numero de tarjeta de credito", id); 
			continue;
		}

		printf("\n%s no es un identificador valido", id);
	} while(1);

	return;
}