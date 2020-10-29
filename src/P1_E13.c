#include "P1.h"
#include "ClasificarCodigos.h"


void (*f[3])( char * );

/*
 * Punto a)
 */
codigo_cliente_t clasificar_campo( char *id ){
	if( EsIP( id  ))
		return ES_IP;

	if( EsEmail( id ))
		return( ES_EMAIL );

	if( EsTarjeta( id ))
		return( ES_TC );

	return INVALIDO;
}

	/*
	 * Punto b)
	 */
void ImprimirCodigo( char *id, codigo_cliente_t tipo ){
	switch( tipo ){
	case ES_IP:
		ImprimirIP( id );
		break;

	case ES_EMAIL:
		ImprimirEmail( id );
		break;

	case ES_TC:
		ImprimirTarjeta( id );
		break;

	default:
		break;
	}

	return;
}

	/*
	 * Punto c)
	 */
void (*FuncionImpresion( char *id )){
	int cod;

	f[0] = ImprimirIP;
	f[1] = ImprimirEmail;
	f[2] = ImprimirTarjeta;

	cod = clasificar_campo( id );

	switch( cod ) {
	case ES_IP:
		return f[0];

	case ES_EMAIL:
		return f[1];

	case ES_TC:
		return f[2];

	default:
		return NULL;
	}
}




void P1_E13(){
	printf("%nEjercicio 13: funciones de identifiacion de cadenas");
	return;
}
