#include "P1.h"
#include "ClasificarCodigos.h"




void ImprimirIP( char *id ){
	printf("%nDireccion IP: %s", id);
	return;
}

void ImprimirEmail( char *id ){
	printf("%nE-Mail: %s", id);
	return;

}
void ImprimirTarjeta( char *id ){
	printf("%nNro. Tarjeta de Credito: %s", id);
	return;
}

	/*
	 *  ValidarDigitosTC(): verifica que 'cadena' es de la forma 'ABCD' donde A, B, C y D
	 *  son digitos entre 0 y 9
	 */

int validarDigitosTC( char *cadena ){
	char *p;
	int i;

	if( strlen(cadena) != 4 )
		return 0;

	p = cadena;
	for( i = 0; i < 4; i++ )
		if( !isdigit( *p++ ))
			return 0;

	return 1;
}

	/*
	 *	Ej 12 a) 1: EsIP(): devuelve '1' si la cadena tiene formato aaa.bbb.ccc.ddd
	 *	aaa, bbb, ccc y ddd son enteros entre 0 y 255
	 */

int EsIP( char *cadena ){
	int a, b, c, d;
	char *p1, *p2, *p3, *p4, buf[40];

	strcpy( buf, cadena );

	p1 = strtok( buf, "." );
	if( p1 == NULL )
		return 0;

	p2 = strtok( NULL, "." );
	if( p2 == NULL )
		return 0;

	p3 = strtok( NULL, "." );
	if( p3 == NULL )
		return 0;

	p4 = strtok( NULL, "." );
	if( p4 == NULL )
		return 0;

	a = atoi( p1 );
	b = atoi( p2 );
	c = atoi( p3 );
	d = atoi( p4 );

	if( a < 0 || a > 255 )
		return 0;

	if( b < 0 || a > 255 )
		return 0;

	if( c < 0 || a > 255 )
		return 0;

	if( d < 0 || a > 255 )
		return 0;

	return 1;
}

	/*
	 *	Ej 12 a) 2: EsEmail(): devuelve '1' si la cadena tiene formato aaa@bbb.ccc...
	 */

int EsEmail( char *cadena ){
	char *pArroba;

	pArroba = strrchr( cadena, '@' );
	if( pArroba == NULL )
		return 0;

	return 1;
}

	/*
	 *	Ej 12 a) 3: EsTarjeta(): devuelve '1' si la cadena tiene formato aaaa bbbb cccc dddd
	 *	aaaa, bbbb, cccc y dddd son enteros positivos de cuatro digitos
	 */

int EsTarjeta( char *cadena ){
	char *p1, *p2, *p3, *p4, buf[40];

	if( strlen( cadena ) != 19 )
		return 0;

	strcpy( buf, cadena );

	p1 = strtok( buf, " " );
	if( p1 == NULL )
		return 0;

	p2 = strtok( NULL, " " );
	if( p2 == NULL )
		return 0;

	p3 = strtok( NULL, " " );
	if( p3 == NULL ) 
		return 0;

	p4 = strtok( NULL, " " );
	if( p4 == NULL ) 
		return 0;

	if( validarDigitosTC( p1 ) == 0 )
		return 0;

	if( validarDigitosTC( p2 ) == 0 )
		return 0;

	if( validarDigitosTC( p3 ) == 0 )
		return 0;

	if( validarDigitosTC( p4 ) == 0 )
		return 0;
	

	return 1;
}

	/*
	 *	Ej 12 b)
	 */
int validate_string( char *id, int (*f_validacion) () ){
	return( f_validacion( id ));
}
