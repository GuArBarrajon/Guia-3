/*
Programa: Ej18.c
Descripción: Realice un programa en C que rellene un array de dos dimensiones con números pares, lo pinte y después que
pida una posición X,Y y mostrar el número correspondiente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(int v[5][10]);
void imprimirMatriz(int v[5][10]);
void busqueda(int v[5][10]);

void main()
{
    int numeros[5][10];
    cargarMatriz(numeros);
    printf("Numeros pares del 2 al 100\n");
    imprimirMatriz(numeros);
    printf("Busqueda de un numero\n");
    busqueda(numeros);
}

void cargarMatriz(int v[5][10])
{
    int numero=2;
    for(int i=0; i<5; i++)          
    {                  
        for(int j=0; j<10; j++)      
        {
            v[i][j]=numero;
            numero=numero+2;
        }
    }
}

void imprimirMatriz(int v[5][10])
{
    for(int i=0; i<5; i++)          
    {
        for(int j=0; j<10; j++)      
        {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
}

void busqueda(int v[5][10])
{
    int i, j;
    printf("Ingrese el numero de fila: ");
    scanf("%d", &i);
    printf("Ingrese el numero de columna: ");
    scanf("%d", &j);
    printf("En la fila %d columna %d se encuentra el %d\n", i, j, v[i][j]);  
}