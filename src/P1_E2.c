#include "P1.h"


void P1_E2(){
	int i=5, j[]={1,2,3,4,5,6,7,8,9,10} , a, letras, cant;
	char x = 'a', pal [] ="texto en c";
	int *pi;
	char *pc;
	

	pi=&i;
	printf("la direccion de i es: %p -y su valor: %d\n",&i,i);
	printf("Por puntero \tvalor:\t%i\tDireccion:\t%p \n",*pi,pi);
	

	cant=sizeof(j)/sizeof(int);
	for(a=0;a<cant;a++)
		printf("Por variable j[%d] \tvalor:\t%i\tDireccion:\t%p \n",a,j[a],&j[a]);
	pi=&j[0];
	for (pi=&j[0];pi<&j[0]+cant;pi++)
		printf("Por puntero j[%d] \tvalor:\t%i\tDireccion:\t%p \n",(pi-&j[0]),*pi,pi);
	pi=j;//otra forma de lo mismo
	for (pi;pi<j+cant;pi++)
		printf("Por puntero j[%d] \tvalor:\t%i\tDireccion:\t%p \n",(pi-j),*pi,pi);
	
	pc=&x;
	printf("\n\nPor Variable:'x'\tValor: %c \tDireccion:\t%p\n",x,&x);
	printf("\nPor Puntero: 'x'\tValor: %c \tDireccion:\t%p\n\n",*pc,pc);

	pc=pal;
	letras=strlen(pal);
	printf("la direccion de pal es: %p -y su valor: %s\n",pal,pal);
	printf("la direccion de pal es: %p -y su valor: %s\n",pc,pc);
	while (*pc!= '\0'){
		printf("por puntero %c\n",*pc);
		pc++;}
	//la direccion de pal no se modifica 
	printf("\n notar que los punteros ahora son distintos\n\n");
	printf("la direccion de pal es: %p -y su valor: %s\n",pal,pal);
	printf("la direccion de pal es: %p -y su valor: %s\n",pc,pc);

}
