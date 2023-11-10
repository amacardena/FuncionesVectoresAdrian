/*
 ============================================================================
 Name        : V_Y_C_5.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_5 de 8. Introducir una cadena e imprimirla en orden inverso
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define LONG_ARR 100

int main(void) {
	char cadena[100];
	int longitud;
	printf("\nIntroduce una cadena de caracteres --> ");
	fflush(stdout);		gets(cadena);



	longitud = strlen(cadena);
	printf("\nINTRODUJISTE ESTA CADENA --> %s", cadena);
	printf("\nAL REVÉS SERÍA ASÍ: \n");


	invertir(cadena, longitud);
	return EXIT_SUCCESS;
}
