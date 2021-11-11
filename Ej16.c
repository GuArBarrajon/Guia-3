/*
Programa: Ej16.c
Descripción: Realice un programa en C que muestre los primeros 100 números de izquierda a derecha usando un array de dos
dimensiones.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(int v[10][10]);
void imprimirMatriz(int v[10][10]);

void main()
{
    int numeros[10][10];
    cargarMatriz(numeros);
    printf("Numeros del 1 al 100\n");
    imprimirMatriz(numeros);
}

void cargarMatriz(int v[10][10])
{
    int numero=0;
    for(int i=0; i<10; i++)          
    {
        for(int j=0; j<10; j++)      
        {
            numero++;
            v[i][j]=numero;
        }
    }
}

void imprimirMatriz(int v[10][10])
{
    for(int i=0; i<10; i++)          
    {
        for(int j=0; j<10; j++)      
        {
            printf("%d  ", v[i][j]);
        }
        printf("\n");
    }
}