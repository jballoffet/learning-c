/**
 * \file            main.c
 * \brief           8. Punteros - Ejemplo 1 - Operador referencia
 * \author          Javier Balloffet
 * \date            05-OCT-2018
 * \details         Usar makefile para compilar, linkear y ejecutar
 */

#include <stdio.h>

int main() {
	int number = 5;

	// 1. Imprimo valor y dirección de memoria de la variable "number"
	printf("Valor de \"number\" = %d\n", number);
	printf("Direccion en memoria de \"number\" = %p\n", &number);

	return 0;
}