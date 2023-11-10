/*
 ============================================================================
 Name        : V_Y_C_1.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_1 de 8. Generar un array de números aleatorios y darle la vuelta
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


int main(void) {

	int array[15];
	int i, rango;
	srand(time(NULL));

	for (i = 0; i < 15; i++)
	{
		array[i] = rand() % 11;
	}
	rango = 15;

	sacarPantallaI(array, rango);
	EJ1(array, rango);
	return EXIT_SUCCESS;
}
