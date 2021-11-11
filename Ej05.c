/*
Programa: Ej05.c
Descripción: Realice un programa en C que rellene un array con los números impares comprendidos entre 1 y 100 y los muestre
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
    int impares[MAX];
    cargar(impares);
    printf("Numeros impares del 1 al 100\n");
    imprimirVec(impares);
}

void cargar(int v[])
{
    int numero=1;
    for(int i=0; i<50; i++)
    {
        v[i]=numero;
        numero=numero+2;
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}