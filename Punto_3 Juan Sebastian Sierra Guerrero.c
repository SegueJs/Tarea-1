#include <stdio.h>

int main()
{
    float a; // Variable encargada de guardar el largo digitado por el usuario
    float b; // Variable encargada de guardar el ancho digitado por el usuario
    float p; // Variable encargada de guardar el perimetro

    printf("Por favor digite el largo del rectangulo: ");
    scanf("%f", &a);

    printf("Por favor digite el ancho del rectangulo: ");
    scanf("%f", &b);

    printf("\n");

    p = (a * 2) + (b * 2);

    printf("El perimetro de un rectangulo con largo %g y ancho %g es de %g.\n", a, b, p);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 20:59:42
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa calcula el perimetro de un rectangulo ingresando su largo y su ancho