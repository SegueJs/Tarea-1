#include <stdio.h>

int main()
{
    char name[20]; //Variable encargada de almacenar el nombre ingresado
    char lastName[20]; //Variable encargada de almacenar el apellido ingresado
    int year; //Variable encargada de almacenar el año ingresado

    printf("Por favor digite su nombre: ");
    scanf("%s", name);

    printf("Por favor digite su apellido: ");
    scanf("%s", lastName);

    printf("Por favor digite su a\u00f1o de nacimiento: "); //Caracteres unicode
    scanf("%i", &year);
    printf("\n");

    printf("%s %s %i\n", name, lastName, year);

    return 0;
}

// Fecha de publicacion: 08/14/2022
// Hora: 22:00:50
// v.1.0.0
// Autor. Ing (C) Juan Sebastian Sierra Guerrero
// Lenguaje usado: "C", Compatible con estándares de C89 Y C90
// Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) v.9.4.0 Copyright (C) 2019 Free Software Foundation, Inc.
// Presentado a: Doctor Ricardo Moreno Laverde
// Universidad Tecnológica de Pereira
// Programa de Ingeniería de Sistemas y Computación
// Este programa imprime el nombre, apellido y año de nacimiento ingresados de una persona