/*
Programa: Ej12.c
Descripción: Realice un programa en C que lea 10 números por teclado, los almacene en un array y muestre la media.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

void cargar(float v[]);
float promedio(float v[]);

void main()
{
    float array[10];
    cargar(array);
    printf("La media de los numeros ingresados es: %0.2f \n", promedio(array));
}

void cargar(float v[])
{
    for(int i=0; i<10; i++)
        v[i]=0;

    for(int i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &v[i]);
    }
}

float promedio(float v[])
{
    float prom, suma=0;
    for(int i=0; i<10; i++)
    {
        suma=suma+v[i];
    }

    prom=suma/10;
    return prom;
}