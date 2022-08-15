#include <stdio.h>

int main()
{
    float centigrados; // Variable encargada de almacenar el valor de los grados centigrados ingresados
    float fahrenheit;  // Variable encargada de almacenar la conversion de los grados centigrados a Fahrenheit
    float K;           // Variable encargada de almacenar una constate para efectuar la operacion para la conversion

    K = 9.0 / 5.0;

    printf("Por favor digite los centigrados a convertir a Fahrenheit: ");
    scanf("%f", &centigrados);
    printf("\n");

    fahrenheit = K * centigrados + 32;

    printf("%g°C son %g grados Fahrenheit\n", centigrados, fahrenheit);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 20:11:34
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa convierte grados centigrados a fahrenheit