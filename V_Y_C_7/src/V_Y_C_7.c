/*
 ============================================================================
 Name        : V_Y_C_7.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_7 DE 8. NÚMEROS CAPICÚAS
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define LONG_ARR 100

int main(void) {
	char cadena[LONG_ARR];
	char resp;

	do {
		resp = 'a';
		fflush(stdin);

		do {
			printf("\nINTRODUCE LA CADENA QUE QUIERES COMPROBAR SI ES CAPICÚA --> ");
			fflush(stdout); 	gets(cadena);
		} while (strlen(cadena) > LONG_ARR);

		if (esCapicua(cadena)) printf("\nLa cadena %s es capicúa", cadena);
		else printf("\nLa cadena %s no es capicúa", cadena);

		fflush(stdin);
		do {
			printf("\n¿Quieres agregar otra cadena? (s/n)");
			fflush(stdout); 	scanf("%c", &resp);
		} while (resp != 's' && resp != 'n');
	} while (resp != 'n');

	printf("\nADIOS (:");
	return EXIT_SUCCESS;
}
