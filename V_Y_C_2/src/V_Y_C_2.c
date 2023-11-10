/*
 ============================================================================
 Name        : V_Y_C_2.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_2 de 8. Generar un array de números aleatorios float
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


int main(void) {

	float array[15];
	int i, rango = 15;
	float num = -1;
	int decimal, entera;
	float decimalF;
	float enteraF;
	srand(time(NULL));

	do {
		printf("\nINTRODUCE UN NUMERO --> ");
		fflush(stdout);		scanf("%f", &num);
	} while (num < 0);

	entera = (int) num;
	decimalF = num - entera;
	decimal = (int) (decimalF * 100);

	printf("\nPARTE ENTERA --> %i", entera);
	printf("\nPARTE DECIMAL --> %i", decimal);

	for (i = 0; i < rango; i++)
	{

		enteraF = (float) (genNumAl(entera));
		decimalF = (float) (genNumAl(decimal)) / 100;

		array[i] = enteraF + decimalF;
	}

	sacarPantallaF(array, rango);
	return EXIT_SUCCESS;
}
