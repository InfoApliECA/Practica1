/*
 * Ejercicio 5
 */
#include "P1.h"

void importe (float cant_kilos, float precio, float * pago) {
	float valor = cant_kilos * precio;
	if (valor > 100) valor *= 0.9F;
	*pago = valor;
}

void P1_E5() {
	float valor;
	importe(5.0, 22.0, &valor);
	printf("\nSe debe abonar: %.2f\n\n", valor);
}
