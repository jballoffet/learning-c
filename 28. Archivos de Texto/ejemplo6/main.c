/**
 * \file            main.c
 * \brief           28. Archivos de Texto - Ejemplo 6 - my_cat (otra forma)
 * \author          Javier Balloffet
 * \date            Sep 18, 2018
 * \details         Usar makefile para compilar, linkear y ejecutar
 */

#include <stdio.h>

int main() {
    FILE* fp;
    char character;

    /* 1. Abro el archivo en modo lectura (r) */
    fp = fopen("archivo.txt", "r");

    /* 2. Chequeo si hubo un error al abrir el archivo */
    if (fp == NULL) {
        printf("Error abriendo el archivo!\n");
        return -1;
    }

    /* 3. Leo e imprimo en pantalla el archivo caracter por caracter hasta llegar al EOF */
    character = fgetc(fp);

    while (character != EOF) {
        printf("%c", character);
        character = fgetc(fp);
    }

    printf("\n");

    /* 4. Cierro el archivo */
    fclose(fp);

	return 0;
}
