#include "P1.h"

#define MAXLEN 200 // longitud máxima de cada línea 
#define MAXLINES 20 // cantidad máxima de líneas
int getline(char [], int); // retorna la longitud de la linea incluyendo el '\n' (no el '\0') (pag 31)
int readLines(char * [], int); // retorna la cantidad de lineas leídas (pag 120)


// trabajamos con un arreglo de punteros a char	


void P1_E8() {
	int i, j;
	char c;
	int cuenta[256] = {0};
	char * linePtr[MAXLINES];
	int cantLineas = readLines(linePtr, MAXLINES);
	for(i = 0; i < cantLineas; i++) {
		j = 0;
		while((c = linePtr[i][j])) { cuenta[c]++; j++; }
	}
	for(i = 0; i < 256; i++) {
		printf("\t%c - %d", i, cuenta[i]);
		if (!(i%4)) printf("\n");
	}
}


int getline(char s [], int lim) {
	int c, i;
	for(i = 0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; i++) s[i] = c;
	if (c == '\n') { s[i] = c; i++; }
	s[i] = '\0';
	return i;
}

int readLines(char * lineaPtr [], int maxLines) {
	int nlines, len;
	char * p;
	char line [MAXLEN];
	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 1) { // algo más que sólo Enter
		p = (char *) malloc(len * sizeof(char));
		if (nlines >= maxLines || p == NULL)
			return -1;
		else {
			line[len - 1] = '\0'; // sobreescribe el '\n'
			strcpy(p, line);
			lineaPtr[nlines] = p;
			nlines++;
		}
	}
	return nlines;
}
