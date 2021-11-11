/*
Programa: Ej08.c
Descripción: Realice un programa en C que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar
los 10 números en pantalla mediante un solo array.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargar(int v[]);
void cargar2(int v1[], int v2[], int v3[]);
void imprimirVec(int v[]);

void main()
{
    int array1[5];
    int array2[5];
    int array3[10];
    printf("Array 1\n");
    cargar(array1);
    printf("Array 2\n");
    cargar(array2);
    printf("Array 3\n");
    cargar2(array1, array2, array3);
    imprimirVec(array3);
}

void cargar(int v[])
{
    for(int i=0; i<5; i++)
        v[i]=0;

    for(int i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

void cargar2(int v1[], int v2[], int v3[])
{
    for(int i=0; i<5; i++)
    {
        v3[i]=v1[i];            //copia el array 1 al array 3 en sus primeras 5 posiciones
        v3[5+i]=v2[i];          //copia el array 2 al array 3 en la segunda mitad de este
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<10; i++)
        printf("%d - ", v[i]);
}