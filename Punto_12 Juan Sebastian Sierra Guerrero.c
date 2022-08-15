#include <stdio.h>
#include <math.h>

int main()
{
    float res; // Variable encargada de almacenar el resultado de la operacion

    res = ((17.0 / 11.0) + (23.0 / 2.0)) / ((943.0 / 120.0) + sqrt(144));

    printf("El resultado de la operacion es: %g\n", res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:46:17
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa calcula el resultado de una operacion