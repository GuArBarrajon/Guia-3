/*
Programa: Ej10.c
Descripción: Realice un programa en C que lea 5 números por teclado, los copie a otro array multiplicados por 2 y los muestre
todos ordenados usando un tercer array.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

void cargar(int v[]);
void multiplicar2(int v1[], int v2[]);
void ordenamiento(int v1[], int v2[]);
void imprimirVec(int v[]);

void main()
{
    int array1[5];
    int array2[5];
    int array3[5];
    cargar(array1);
    printf("Array Ingresado\n");
    imprimirVec(array1);
    printf("\nArray Multiplicado por 2\n");
    multiplicar2(array1, array2);
    imprimirVec(array2);
    printf("\nArray Ordenado\n");
    ordenamiento(array2, array3);
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

void multiplicar2(int v1[], int v2[])
{
    for(int i=0; i<5; i++)
        v2[i]=0;

    for(int i=0; i<5; i++)
    {
        v2[i]=v1[i]*2;
    }
}

void ordenamiento(int v1[], int v2[])
{
    int aux;
    for(int i=0; i<4; i++)        //ordenamiento del array2
    {
        for(int j=i+1; j<5; j++)
        {
            if(v1[i]>v1[j])
            {
                aux=v1[i];
                v1[i]=v1[j];
                v1[j]=aux;
            }
        }
    }

    for(int i=0; i<5; i++)   //copia del array2 ordenado al array3
        v2[i]=v1[i];
}

void imprimirVec(int v[])
{
    for(int i=0; i<5; i++)
        printf("%d - ", v[i]);
}