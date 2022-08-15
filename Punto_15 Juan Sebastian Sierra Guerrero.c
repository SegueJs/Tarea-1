#include <stdio.h>
#include <math.h>

int main()
{
    float x;   // Variable encargada de almacenar el valor de x ingresado por el usuario
    float res; // Variable encargada de almacenar el resultado de la operacion

    printf("Por favor digite el valor que le quiere asignar a x: ");
    scanf("%f", &x);

    res = (((((((x / 6.0) + (45.0 / x)) / (x - (-8.0 / 2.0))) / 12.0) / sqrt(x)) / 5.0) + (x * x * x * x)) / sqrt(x);

    printf("\n");

    printf("El resultado de la ecuacion para un valor %f es de %f\n", x, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:51:05
// v.1.2.1
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa calcula el resultado de una operacion con un valor x ingresado por el usuario