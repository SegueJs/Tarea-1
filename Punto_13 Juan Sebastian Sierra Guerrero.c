#include <stdio.h>
#include <math.h>

int main()
{
    float x;   // Variable encargada de almacenar el valor de x ingresado por el usuario
    float res; // Variable encargada de almacenar el resultado de la operacion

    printf("Por favor digite el valor que le quiere asignar a x: ");
    scanf("%f", &x);
    printf("\n");

    res = ((x * (1.0/2.0) + 25)) / (((sqrt(169)) / (sqrt(144))) + ((sqrt(x)) / x));

    printf("El resultado de la ecuacion para un valor de %g es de %g\n", x, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:51:05
// v.1.1.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa calcula el resultado de una operacion con un valor x ingresado por el usuario