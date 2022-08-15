#include <stdio.h>

int main()
{
    int h;   // Variable encargada de almacenar las horas digitada por el usuario
    int m;   // Variable encargada de almacenar los minutos digitados por el usuario
    int s;   // Variable encargada de almacenar los segundos digitados por el usuario
    int res; // Variable encargada de almacenar el resultado en milisegundos

    printf("Por favor digite el numero de horas, minutos y segundos que\ndesea convertir a milisegundos.\n\n");

    printf("Digite horas: ");
    scanf("%i", &h);

    printf("Digite minutos: ");
    scanf("%i", &m);

    printf("Digite segundos: ");
    scanf("%i", &s);
    printf("\n");

    res = ((h * 3600) + (m * 60) + s) * 1000;

    printf("La cantidad de milisegundos para %i horas, %i minutos y %i segundos\nes de: %i milisegundos\n", h, m, s, res);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:35:45
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa muestra en milisegundos la cantidad de horas, minutos y segundos