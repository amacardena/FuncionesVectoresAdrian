/*
 * funciones.h
 *
 *  Created on: 6 nov 2023
 *      Author: Adrian
 */
#define LONG_ARR 100
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

void sacarPantallaI(int array[LONG_ARR], int longitud);
void sacarPantallaF(float array[LONG_ARR], int longitud);
void EJ1(int array[LONG_ARR], int longitud);
int genNumAl (int num);
void invertir (char array[LONG_ARR], int longitud);
int esNif(char cadena[]);
void DNI (char cadena[]);
int esCapicua(char cadena[]);
void EJ4(float array[], int rango, int posicionCambio, float numCambio);
int calculoMayor (int array[], int rango);
int calculoMenor (int array[], int rango);
float calculoMedia(int array[], int rango);
float calculoDesTipica(int array[], int rango);
void EJ6(int num, int array[], int *cont);

#endif /* FUNCIONES_H_ */
