/*
Programa: Ej04.c
Descripción: Realice un programa en C que rellene un array con los números pares comprendidos entre 1 y 100 y los muestre
en pantalla en orden ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 50

void cargar(int v[]);
void imprimirVec(int v[]);

void main()
{
    int pares[MAX];
    cargar(pares);
    printf("Numeros pares del 1 al 100\n");
    imprimirVec(pares);
}

void cargar(int v[])
{
    int j=0;
    for(int i=0; i<50; i++)
    {
        j=j+2;
        v[i]=j;
    }
}



void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}