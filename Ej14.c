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

void main()
{
    int array[MAX];
    cargar(array);
    busqueda(array);
    imprimirVec(array);
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
    int aux;
    for(int i=0; i<MAX-1; i++)
    {
        for(int j=i+1; j<MAX; j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    int numero, flag=0;
    printf("Ingrese un numero a buscar: ");
    scanf("%d", &numero);
    for(int i=0; i<MAX; i++)
    {
        if(numero==v[i])
        printf("Se encontro el numero en la posicion: %d\n", i);
        flag=1;
        if(flag==0)
            printf("No se encontró el numero\n");
    }
}

void imprimirVec(int v[])
{
    for(int i=0; i<MAX; i++)
        printf("%d - ", v[i]);
}