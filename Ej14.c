/*
Programa: Ej14.c
Descripción: Realice un programa en C que rellene un array con 20 números y luego busque un número concreto. Informando
su posición.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 20

void cargar(int v[]);
void busqueda(int v[]);
void imprimirVec(int v[]);

void main()
{
    int array[MAX];
    cargar(array);
    printf("Vector ingresado:\n");
    imprimirVec(array);
    busqueda(array);
}

void cargar(int v[])
{
    for(int i=0; i<MAX; i++)
        v[i]=0;

    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

void busqueda(int v[])
{
    int i, numero, flag=0;
    printf("\nIngrese un numero a buscar: ");
    scanf("%d", &numero);
    for(i=0; i<MAX; i++)
    {
        if(numero==v[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Se encontro el numero en la posicion: %d\n", i);
    }
    else
    {
        printf("No se encontro el numero\n");
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d - ", v[i]);
    }
}