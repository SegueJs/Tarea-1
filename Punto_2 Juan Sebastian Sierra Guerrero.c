#include <stdio.h>

int main()
{
    float r;   // Variable encargada de almacenar el radio ingresado por el usuario
    float pi;  // Variable encargada de almacenar la constante pi
    float K;   // Variable encargada de almacenar una constate para efectuar la operacion para la conversion
    float vol; // Variable encargada de almacenar el resultado

    pi = 3.1415926;
    K = 4.0 / 3.0;

    printf("Por favor digite el radio de la esfera: ");
    scanf("%f", &r);
    printf("\n");

    vol = K * pi * (r * r * r);

    printf("El volumen de una esfera de radio %g es de %g\n", r, vol);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 20:30:54
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa calcula el volumen de una esfera ingresando de su radio