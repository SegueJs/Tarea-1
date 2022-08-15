#include <stdio.h>

int main()
{
    int mins; // Variable encargada de almacenar los minutos ingresados por el usuario
    int h;    // Variable encargada de almacenar las horas resultantes
    int m;    // Variable encargada de almacenar los minutos resultantes

    printf("Por favor digite la cantidad de minutos: ");
    scanf("%i", &mins);
    printf("\n");

    h = mins / 60;
    m = mins % 60;

    printf("%i minutos son %i horas y %i minutos.\n", mins, h, m);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 21:30:32
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa muestra la cantidad de horas y minutos apartir de una cantidad de minutos ingresada