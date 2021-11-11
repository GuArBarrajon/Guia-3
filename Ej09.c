/*
Programa: Ej09.c
Descripción: Realice un programa en C que lea 5 números por teclado, los copie a otro array multiplicados por 2 y muestre el
segundo array.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargar(int v[]);
void multiplicar2(int v1[], int v2[]);
void imprimirVec(int v[]);

void main()
{
    int array1[5];
    int array2[5];
    
    cargar(array1);
    printf("Array Ingresado\n");
    imprimirVec(array1);
    multiplicar2(array1, array2);
    printf("\nArray multiplicado por 2\n");
    imprimirVec(array2);
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

void multiplicar2(int v1[], int v2[])
{
    for(int i=0; i<5; i++)
        v2[i]=0;

    for(int i=0; i<5; i++)
    {
        v2[i]=v1[i]*2;         //multiplicacion del array1 y copia al array2
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<5; i++)
        printf("%d - ", v[i]);
}