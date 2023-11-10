/*
 ============================================================================
 Name        : V_Y_C_4.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ4_8. Modificar array de floats
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LONG_ARR 8

int main(void) {
	float array[LONG_ARR];
	int i;
	float numCambio, num;
	char resp;

	do {
		resp = 'a';
		fflush(stdin);

		for (i = 0; i < LONG_ARR; i++)
		{
			array[i] = 0;
		}

		for (i = 0; i < LONG_ARR; i++)
			{
				printf("\nIntroduce el valor de la posicion %i --> ", i+1);
				fflush(stdout);		scanf("%f", &array[i]);
			}

		printf("\nTu array actual es el siguiente: \n");
		sacarPantallaF(array, LONG_ARR);

		do {
			printf("\nElige la posicion que quieres modificar (0-7): ");
			fflush(stdout); 		scanf("%f", &num);
		} while (num < 0 || num > 7);

		printf("\nIntroduce el nuevo valor --> ");
		fflush(stdout);		scanf("%f", &numCambio);

		EJ4(array, LONG_ARR, num, numCambio);

		printf("\nEL NUEVO ARRAY QUEDARÍA ASÍ: \n");

		sacarPantallaF(array, LONG_ARR);

		do {
			printf("\n¿Quieres agregar otro array? (s/n)");
			fflush(stdout); 	scanf("%c", &resp);
		} while (resp != 's' && resp != 'n');
	} while (resp != 'n');

	printf("\nADIOS (:");
	return EXIT_SUCCESS;
}
