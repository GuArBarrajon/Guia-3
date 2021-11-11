/*
Programa: Ej01.c
Descripción: Realice un programa en C que rellene un array con los 100 primeros números enteros y los muestre en pantalla
en orden ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 100

void cargar(int v[]);
void imprimirVec(int v[]);

void main()
{
    int vector[MAX];
    cargar(vector);
    printf("Numeros del 1 al 100\n");
    imprimirVec(vector);
}

void cargar(int v[])
{
    int num=1;
    for(int i=0; i<MAX; i++)
    {
        v[i]=num++;
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}
