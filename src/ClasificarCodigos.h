int validarDigitosTC( char *cadena );
int EsIP( char *cadena );
int EsEmail( char *cadena );
int EsTarjeta( char *cadena );
void ImprimirIP( char *id );
void ImprimirEmail( char *id );
void ImprimirTarjeta( char *id );

typedef enum { INVALIDO, ES_IP, ES_EMAIL, ES_TC } codigo_cliente_t;
