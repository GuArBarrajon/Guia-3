/*
Programa: Ej02.c
Descripción: Realice un programa en C que rellene un array con los 100 primeros números enteros y los muestre en pantalla
en orden descendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 100

void cargar(int v[]);
void ordenamiento(int v[]);
void imprimirVec(int v[]);

void main()
{
    int vector[MAX];
    cargar(vector);
    ordenamiento(vector);
    printf("Numeros del 1 al 100 en orden descendente\n");
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

void ordenamiento(int v[])
{
    int aux;
    for(int i=0; i<MAX-1; i++)
    {
        for(int j=i+1; j<MAX; j++)
        {
            if(v[i]<v[j])
            {
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}