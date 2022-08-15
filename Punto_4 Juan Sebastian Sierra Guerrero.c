#include <stdio.h>

int main()
{
    float kmh; // Variable encargada de almacenar los Km/h ingresados por el usuario
    float mph; // Variable encargada de almacenar el resultado de la conversion a Mph
    float K;   // Variable encargada de almacenar la constante para realizar la conversion

    K = 0.621371;

    printf("Por favor digite cuantos km/h quiere convertir a mph: ");
    scanf("%f", &kmh);
    printf("\n");

    mph = kmh * K;

    printf("%g km/h equivalen a %f mph.\n", kmh, mph);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 21:12:32
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa convierte kilometros sobre hora a millas por hora