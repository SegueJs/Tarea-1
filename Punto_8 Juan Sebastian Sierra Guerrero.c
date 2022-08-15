#include <stdio.h>

int main()
{
    float a, b; // Variables encargadas de capturar dos numeros ingresados por el usuario para operar con ellas

    printf("Por favor digite el primer numero: ");
    scanf("%f", &a);

    printf("Por favor digite el segundo numero: ");
    scanf("%f", &b);
    printf("\n");

    printf("Suma: %g\nResta: %g\nMultiplicacion: %g\nDivision: %g\n", a + b, a - b, a * b, a / b);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:10:22
// v.1.1.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa muestra las 4 operaciones basicas operando dos valores ingresados