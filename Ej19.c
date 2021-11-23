/*
Programa: Ej19.c
Descripción: Realice un programa en C que rellene una matriz de 3x3 y muestre su traspuesta (la traspuesta se consigue
intercambiando filas por columnas y viceversa).
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(int v[3][3]);
void traspuesta(int v[3][3]);
void imprimirMatriz(int v[3][3]);

void main()
{
    int matriz[3][3];
    cargarMatriz(matriz);
    printf("Matriz de 3x3 ingresada\n");
    imprimirMatriz(matriz);
    printf("Su traspuesta\n");
    traspuesta(matriz);
}

void cargarMatriz(int v[3][3])
{
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            v[i][j]=0;
        }
    }
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            printf("Ingrese un numero: ");
            scanf("%d", &v[i][j]);
        }
    }
}

void imprimirMatriz(int v[3][3])
{
    for(int i=0; i<3; i++)          
    {
        for(int j=0; j<3; j++)      
        {
            printf("%d\t", v[i][j]);
        }
        printf("\n");
    }
}

void traspuesta(int v[3][3])
{
    for(int i=0; i<3; i++)          
    {                  
        for(int j=0; j<3; j++)      
        {
            printf("%d\t", v[j][i]);
        }
        printf("\n");
    }  
}