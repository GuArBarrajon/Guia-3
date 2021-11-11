/*
Programa: Ej13.c
Descripción: Realice un programa en C que mediante un array almacene números tanto positivos como negativos y los
muestre ordenados.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 10

void cargar(int v[]);
void ordenamiento(int v[]);

void main()
{
    int array[MAX];
    cargar(array);
    printf("Array desordenado\n");
    imprimirVec(array);
    ordenamiento(array);
    printf("\nArray ordenado\n");
    imprimirVec(array);
}

void cargar(int v[])
{
    for(int i=0; i<MAX; i++)
        v[i]=0;

    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero positivo o negativo: ");
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