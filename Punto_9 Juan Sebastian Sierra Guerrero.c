#include <stdio.h>

int main()
{
    float a, b; // Variables encargadas de capturar dos angulos ingresados por el usuario
    float res;  // Variable encargada de almacenar el angulo faltante

    printf("Por favor digite el valor del primer angulo: ");
    scanf("%f", &a);

    printf("Por favor digite el valor del segundo angulo: ");
    scanf("%f", &b);
    printf("\n");

    res = 180 - (a + b);

    printf("El valor del tercer angulo de un triangulo con angulos %g y %g es de %g.\n", a, b, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:20:25
// v.1.1.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa encuentra el valor del angulo faltante de un triangulo ingresando dos angulos conocidos