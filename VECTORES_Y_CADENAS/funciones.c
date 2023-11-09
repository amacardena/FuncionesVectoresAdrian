/*
 * funciones.c
 *
 *  Created on: 6 nov 2023
 *      Author: Adrian
 */
#define LONG_ARR 100
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void EJ1(int array[LONG_ARR], int longitud)
{
	int i;

	for (i = 0; i < longitud; i++)
	{
		printf("\nPOSICION %i --> %i", i+1, array[longitud-1-i]);
	}
}
void sacarPantallaI(int array[LONG_ARR], int longitud)
{
	int i;
	for (i = 0; i < longitud; i++)
	{
		printf("\nPOSICION %i --> %i", i+1, array[i]);
	}
}

void sacarPantallaF(float array[LONG_ARR], int longitud)
{
	int i;
	for (i = 0; i < longitud; i++)
	{
		printf("\nPOSICION %i --> %.2f", i+1, array[i]);
	}
}

int genNumAl (int num)
{
	return rand() % num;
}

void invertir (char array[LONG_ARR], int longitud)
{
	int i = 0;

	for (i = longitud -1; i >= 0; i--)
	{
		printf("%c", array[i]);
	}
}

int esNif(char cadena[])
{
	int i, valor;
	int salida = 1;
	for(i = 0; i < 8; i++)
	{
		valor = atoi(&cadena[i]);

		printf("\nPosicion %i: valor de %c: %i", i+1, cadena[i], valor);
		if (valor == 0 && cadena[i] != '0') {salida = 0; break;}
		else if (cadena[i] < '0' || cadena[i] > '9') {salida = 0; break;}

	}

	if (i == 8)
	{
		valor = atoi(&cadena[8]);
		if (valor == 0 && cadena[8] != '0') salida = 1;
		else salida = 0;
	}


	return salida;
}
