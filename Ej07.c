/*
Programa: Ej07.c
Descripción: Realice un programa en C que lea 10 números por teclado, los almacene en un array y los ordene de forma
ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 10

void cargar(int v[]);
void ordenamiento(int v[]);
void imprimirVec(int v[]);

void main()
{
    int vector[MAX];
    cargar(vector);
    printf("Vector desordenado\n");
    imprimirVec(vector);
    ordenamiento(vector);
    printf("\nVector ordenado\n");
    imprimirVec(vector);
}

void cargar(int v[])
{
    for(int i=0; i<MAX; i++)
        v[i]=0;

    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
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

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
        printf("%d - ", v[i]);
}