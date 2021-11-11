/*
Programa: Ej03.c
Descripción: Realice un programa en C que rellene un array con los números primos comprendidos entre 1 y 100 y los
muestre en pantalla en orden ascendente.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 100

void cargar(int v[]);
void imprimirVec(int v[]);

void main()
{
    int primos[MAX];
    cargar(primos);
    printf("Numeros primos del 1 al 100\n");
    imprimirVec(primos);
}

void cargar(int v[])
{
    for(int i=0; i<MAX; i++)
        v[i]=0;

    int num=1, contador=0;
    for(int i=0; num<MAX; i++)
    {
        num++;
        for(int j=1; j<=num; j++)
        {
            if(num%j==0)
            {
                contador++;
            }
        }
        if(contador==2)
        {
            v[i]=num;
        }
        contador=0;
    }
}



void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        if(v[i]!=0)                 //Como no sabía el numero exacto de primos, declaré el vector con 100 posiciones
            printf("%d - ", v[i]);  //y al haber hecho la limpieza de la "posible basura" antes de la carga, quedan 
    }                               //posiciones con 0.
}