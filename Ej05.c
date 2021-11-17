/*
Programa: Ej05.c
Descripción: Realice un programa en C que rellene un array con los números impares comprendidos entre 1 y 100 y los muestre
en pantalla en orden ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50

void cargar(int v[]);
void ordenamiento(int v[]);
void imprimirVec(int v[]);

void main()
{
    int impares[MAX];
    cargar(impares);
    printf("Numeros impares aleatorios del 1 al 100\n");
    imprimirVec(impares);
    printf("\nVector de numeros impares del 1 al 100 aleatorios ordenados en forma ascendente\n");
    ordenamiento(impares);
    imprimirVec(impares);
}

void cargar(int v[])
{
    srand(time(NULL));
    
    for(int i=0; i<MAX; i++)
    {
        v[i]=2*((rand()%MAX)+1)-1;
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}

void ordenamiento(int v[])
{
    int aux;
    for(int i=0; i<MAX-1; i++)
    {
        for(int j=i+1; j<MAX; j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}