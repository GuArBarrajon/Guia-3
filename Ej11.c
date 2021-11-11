/*
Programa: Ej11.c
Descripción: Realice un programa en C que rellene un array con los 100 primeros números pares y muestre su suma.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargar(int v[]);
int suma(int v[]);
void imprimirVec(int v[]);

void main()
{
    int array[50];
    cargar(array);
    printf("Array de numeros pares del 1 al 100\n");
    imprimirVec(array);
    printf("\nLa suma de los numeros ingresados es: %d \n", suma(array));
}

void cargar(int v[])
{
    for(int i=0; i<50; i++)
        v[i]=0;

    int j=2;
    for(int i=0; i<50; i++)
    {
        v[i]=j;
        j=j+2;
    }
}

int suma(int v[])
{
    int sum=0;
    for(int i=0; i<50; i++)
    {
        sum=sum+v[i];
    }
    return sum;
}

void imprimirVec(int v[])
{
    for(int i=0; i<50; i++)
        printf("%d - ", v[i]);
}