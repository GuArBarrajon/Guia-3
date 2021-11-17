/*
Programa: Ej01.c
Descripción: Realice un programa en C que rellene un array con los 100 primeros números enteros y los muestre en pantalla
en orden ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void cargar(int v[]);
void imprimirVec(int v[]);
void ordenamiento(int v[]);

void main()
{
    int vector[MAX];
    cargar(vector);
    printf("Numeros del 1 al 100 aleatorios\n");
    imprimirVec(vector);
    ordenamiento(vector);
    printf("\nVector ordenado en forma ascendente\n");
    imprimirVec(vector);

}

void cargar(int v[])
{
    srand(time(NULL));
    
    for(int i=0; i<MAX; i++)
    {
        v[i]=1+rand()%MAX;
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