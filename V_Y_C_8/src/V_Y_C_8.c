/*
 ============================================================================
 Name        : V_Y_C_8.c
 Author      : Adrián Marín
 Version     :
 Copyright   : Your copyright notice
 Description : EJ_8 de 8. COMPROBAR SI EL NIF METIDO POR TECLADO ES VÁLIDO
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"


int main(void) {
	char nif[9];
	char resp;

	do {
		resp = 'a';
		fflush(stdin);
			do {
						printf("\nIntroduce el NIF a continuación --> ");
						fflush(stdout);		gets(nif);

						if (strlen(nif) != 9) printf("\nEl NIF no es válido. Introdúcelo de nuevo.");
				} while (strlen(nif) != 9);

				nif[8] = toupper(nif[8]);

				if (esNif(nif))
				{
					printf("\nEl NIF es válido");
					printf("\nTu DNI es el siguiente: \n");
					DNI(nif);

				} else printf("\nEl NIF no es válido");

				fflush (stdin);
			do {
				printf("\n¿Quieres agregar otro NIF? (s/n)");
				fflush(stdout); 	scanf("%c", &resp);
			} while (resp != 's' && resp != 'n');
	} while (resp != 'n');
	printf("\nADIOS (:");
	return EXIT_SUCCESS;
}
