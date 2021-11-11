/*
Programa: Ej17.c
Descripción: Realice un programa en C que muestre los primeros 100 números de izquierda a derecha usando un array de dos
dimensiones, la última fila a mostrará la suma de sus respectivas columnas.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(int v[11][10]);
void imprimirMatriz(int v[11][10]);

void main()
{
    int numeros[11][10];
    cargarMatriz(numeros);
    printf("Numeros del 1 al 100 con la suma de sus columnas\n");
    imprimirMatriz(numeros);
}

void cargarMatriz(int v[11][10])
{
    int suma;
    for(int j=0; j<10; j++)          
    {
        suma=0;                   //suma tiene que volver a 0 cada vez que comienza una nueva columna
        for(int i=0; i<10; i++)      
        {
            v[i][j]=(i*10)+1+j;
            suma=suma+v[i][j];
        }
        v[10][j]=suma;
    }
}

void imprimirMatriz(int v[11][10])
{
    for(int i=0; i<11; i++)          
    {
        for(int j=0; j<10; j++)      
        {
            printf("%d  ", v[i][j]);
        }
        printf("\n");
    }
}