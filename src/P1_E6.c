
	/*Ejercicio 6*/
#include "P1.h"


typedef enum { MAYUSCULAS, MINUSCULAS } may_min;

int strVacio(const char * origen); //retorna 1 = vacio o 0 si tiene al menos un caracter
int strLargo(const char * origen); //Cantidad de caracteres: 1 
void strCopia(char * destino, const char * origen); // Copiador
void strIzq(char * destino, const char * origen);  // Saca blancos Izq.
void strDer(char * destino, const char * origen);  // Saca blancos Der.
void strAmbos(char * destino, const char * origen); // Saca blancos Izq. y Der.
void strMayMin(char * destino, const char * origen, may_min); // Convierte May. Min.

int P1_E6() {
	char *text1 ="     Sera Cierto ??   ";
	char * result = (char *) malloc(strLargo(text1)+1);
	if(result == NULL) return 0;
	
	printf("Largo : %s\n", (strVacio(text1) ? "Vacio" : "No Vacio"));
	printf("Largo : %d\n", strLargo(text1));
	strCopia(result,text1);
	printf("Copia : [%s]\n", result);
	
	strIzq(result,text1);
	printf("Izq   : [%s]\n", result);
	
	strDer(result,text1);
	printf("Der   : [%s]\n", result);
	
	strAmbos(result,text1);
	printf("Ambos : [%s]\n", result);
	
	strMayMin(result,text1, MAYUSCULAS);
	printf("Mayusculas : [%s]\n", result);
	
	strMayMin(result,text1, MINUSCULAS);
	printf("Minusculas : [%s]\n", result);

	return 0;
}

int strVacio(const char * origen){
	return (*origen == '\0' )? 1 : 0;
}

int	strLargo(const char * origen){
	char * p;
	p=(char *)origen;
	while(*p!='\0') p++;
	return (p-origen);
}

void strCopia(char * destino, const char * origen){
	while(*origen!='\0'){
		*destino = *origen;
		origen++;
		destino++;
	}
	*destino = '\0';
	return;
}

void strIzq(char * destino, const char * origen){
	while((*origen!='\0') && (*origen == ' ')) origen++;
	while(*origen!='\0'){
		*destino = *origen;
		origen++;
		destino++;
	}
	*destino = '\0';
	return;
}

void strDer(char * destino, const char * origen){
	char *p;
	int i = strLargo(origen);
	p=(char *)(origen+strLargo(origen));
	while(p > origen && (*p==' ' || *p=='\0' ))
		p--;
	while(p>=origen){
		*destino = *origen;
		origen++;
		destino++;
	}
	*destino = '\0';
	return;
}

void strAmbos(char * destino, const char * origen){
	strDer(destino,origen);
	strIzq(destino,destino);
}


void strMayMin(char * destino, const char * origen, may_min my){
	switch (my){
	case MAYUSCULAS: 
		while(*origen!='\0'){
			if(*origen >= 'a' && *origen <= 'z')
				*destino = *origen - 'a' + 'A';
			else
				*destino = *origen;
			origen++;
			destino++;
		}
		break;
	case MINUSCULAS:
		while(*origen!='\0'){
			if(*origen >= 'A' && *origen <= 'Z')
				*destino = *origen - 'A' + 'a';
			else
				*destino = *origen;
			origen++;
			destino++;
		}
	}
	*destino = '\0';
}
