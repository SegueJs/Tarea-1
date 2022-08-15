#include <stdio.h>

int main()
{
    int h;   // Variable encargada de almacenar las horas ingresados por el usuario
    int m;   // Variable encargada de almacenar los minutos ingresados por el usuario
    int res; // Variable encargada de almacenar el resultado

    printf("Por favor digite la cantidad de horas: ");
    scanf("%i", &h);

    printf("Por favor digite la cantidad de minutos: ");
    scanf("%i", &m);
    printf("\n");

    res = h * 60 + m;

    printf("%i horas y %i minutos equivalen a %i minutos.\n", h, m, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 21:19:32
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa muestra la cantidad de minutos apartir de una catidad de horas y minutos ingresada