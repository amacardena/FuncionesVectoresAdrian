/*
 ============================================================================
 Name        : V_Y_C_3.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_3 de 8. Altura de los alumnos de una clase
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LONG_ARRAY 30
int main(void) {
	int altura[LONG_ARRAY];
	int i, numAlumnos;
	char resp;
	float media, desTipica;
	int opcion, mayor, menor;

	do {
		resp = 'a';
		opcion = -1;
		numAlumnos = -1;
		do {
			printf("\nIntroduce el número de alumnos de la clase (MÁX 30) --> ");
			fflush(stdout);		scanf("%i", &numAlumnos);
		} while(numAlumnos < 1 || numAlumnos > 30);

		for (i = 0; i < numAlumnos; i++)
		{
			do {
				printf("\nIntroduce la altura del alumno %i --> ", i+1);
				fflush(stdout); 		scanf("%i", &altura[i]);
			} while (altura[i] < 0);
		}
		printf("\nAltura de los alumnos de la clase: ");
		sacarPantallaI(altura, numAlumnos);
		desTipica = calculoDesTipica(altura, numAlumnos);
		mayor = calculoMayor(altura, numAlumnos);
		menor = calculoMenor(altura, numAlumnos);
		media = calculoMedia(altura, numAlumnos);
		do {
				printf("\n1. Sacar el alumno con la altura mayor\n");
				printf("\n2. Sacar el alumno con la altura menor\n");
				printf("\n3. Sacar la media de altura de la clase\n");
				printf("\n4. Sacar la desviacion tipica de la clase\n");
				printf("\n5. Sacar todo lo anterior\n");
				printf("\n0. Salir\n");
				printf("\nElige una opción --> ");
				fflush(stdout);		scanf("%i", &opcion);

				switch (opcion)
				{
					case 0: break;
					break;
					case 1:	printf("\nEl alumno con la altura mayor es el numero %i con una altura de %i cm\n", mayor+1, altura[mayor]);
					break;
					case 2:	printf("\nEl alumno con la altura menor es el numero %i con una altura de %i cm\n", menor+1, altura[menor]);
					break;
					case 3:	printf("\nLa media de altura de la clase es de %.2f\n", media);
					break;
					case 4:	printf("\nLa desviacion tipica de la clase es %.2f\n", desTipica);
					break;
					case 5:	printf("\nEl alumno con la altura mayor es el numero %i con una altura de %i cm\n", mayor+1, altura[mayor]);
							printf("\nEl alumno con la altura menor es el numero %i con una altura de %i cm\n", menor+1, altura[menor]);
							printf("\nLa media de altura de la clase es de %.2f\n", media);
							printf("\nLa media de altura de la clase es de %.2f\n", media);
							printf("\nLa desviacion tipica de la clase es %.2f", desTipica);
					break;
					default: printf("\nOpción incorrecta. Introdúcela de nuevo\n");
				}
		} while (opcion != 0);
		fflush(stdin);
		do {
			printf("\n¿Quieres agregar otra clase? (s/n)");
			fflush(stdout); 	scanf("%c", &resp);
		} while (resp != 's' && resp != 'n');
	} while (resp != 'n');

	printf("\nADIOS (:");
	return EXIT_SUCCESS;
}
