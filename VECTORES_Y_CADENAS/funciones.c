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
#include <math.h>
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

//		printf("\nPosicion %i: valor de %c: %i", i+1, cadena[i], valor);
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

void DNI (char cadena[])
{
	int i;
	for (i = 0; i < 8; i++)
	{
		printf("%c", cadena[i]);
	}
}

int esCapicua(char cadena[])
{
	int i;
	int salida = 1;
	int rango = strlen(cadena) -1;
	for (i = 0; i <= rango /2; i++)
	{
		if (cadena[i] != cadena[rango - i]) { salida = 0; break;}
	}

	return salida;
}

void EJ4(float array[], int rango, int posicionCambio, float numCambio) {
    int i;

    for (i = rango - 1; i > posicionCambio; i--) {
        array[i] = array[i - 1];
    }

    array[posicionCambio] = numCambio;
}

int calculoMayor (int array[], int rango)
{
	int i;
	int mayor, compM;
	for (i = 0; i < rango; i++)
	{
		if (i == 0) { mayor = i; compM = array[i];}
		else {
			if (array[i] > compM) {mayor = i; compM = array[i];}
		}
	}

	return mayor;
}

int calculoMenor (int array[], int rango)
{
	int i;
	int menor, compm;
	for (i = 0; i < rango; i++)
	{
		if (i == 0) { menor = i; compm = array[i];}
		else {
			if (array[i] < compm) {menor = i; compm = array[i];}
		}
	}

	return menor;
}

float calculoMedia (int array[], int rango)
{
	int i;
	float acumulador = 0;

	for (i = 0; i < rango; i++)
	{
		acumulador += (float) array[i];
	}

	return acumulador / (float)rango;
}

float calculoDesTipica(int array[], int rango)
{
	float media = calculoMedia(array, rango);
	float acumulador = 0;
	int i;
	for (i = 0; i < rango; i++)
	{
		acumulador += (pow((float) array[i] - media, 2));
	}

	return sqrt(acumulador / rango);
}

void EJ6(int num, int array[], int *cont)
{
	int cociente, resto;

	do {
		resto = num %10;
		cociente = num / 10;
		 array[*cont] = resto;
		 *cont = *cont + 1;
		 num = cociente;

	} while (cociente != 0);
}
