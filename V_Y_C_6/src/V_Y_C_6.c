/*
 ============================================================================
 Name        : V_Y_C_6.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_6 de 8. Introducir un número y descomponerlo en un array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	int num, array[10];
	int cont = 0;
	int i;
	char resp;

	do{
		resp = 'a';
		cont = 0;

		printf("\n Introduce un numero --> ");
		fflush(stdout); 	scanf("%i", &num);

		EJ6(num, array, &cont);

		printf("\nValores del array:\n");

		for (i = 0; i < cont; i++)
		{
			printf("\nPosicion %i --> %i", i+1,array[cont-1-i]);
		}
		fflush(stdin);
		do {
		printf("\n¿Quieres agregar otro num? (s/n)");
		fflush(stdout); 	scanf("%c", &resp);
		} while (resp != 's' && resp != 'n');
	} while (resp != 'n');

	printf("\nADIOS (:");
	return EXIT_SUCCESS;
}
