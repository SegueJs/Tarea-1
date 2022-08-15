#include <stdio.h>

int main()
{
    float mph; // Variable encargada de almacenar las mph ingresadas por el usuario
    float res; // Variable encargada de almacenar los m/s resultantes
    float K;   // Variable encargada de almacenar la constante para la conversion

    K = 1609.344;

    printf("Por favor digite la cantidad de mph que desea convertir a m/s: ");
    scanf("%f", &mph);
    printf("\n");

    res = mph * K / 3600;

    printf("%g mph equivalen a %g m/s\n", mph, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:25:35
// v.1.0.2
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa convierte millas por hora a metros sobre segundos