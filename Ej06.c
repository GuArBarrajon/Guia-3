/*
Programa: Ej06.c
Descripción: Realice un programa en C que lea 10 números por teclado, los almacene en un array y muestre la suma, resta,
multiplicación y división de todos.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 10

void cargar(int v[]);
int suma(int v[]);
int resta(int v[]);
int multiplicacion(int v[]);
float division(float v[]);

void main()
{
    int numeros[MAX];
    cargar(numeros);
    printf("La suma de los numeros ingresados es: %d\n", suma(numeros));
    printf("La resta de los numeros ingresados es: %d\n", resta(numeros));
    printf("La multiplicacion de los numeros ingresados es: %d\n", multiplicacion(numeros));
    printf("La division de los numeros ingresados es: %0.2f\n", division(numeros));
}

void cargar(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

int suma(int v[])
{
    int sum=0;
    for(int i=0; i<MAX; i++)
    {
        sum=sum+v[i];
    }
    return sum;
}

int resta(int v[])
{
    int rest=0;
    for(int i=0; i<MAX; i++)
    {
        rest=rest-v[i];
    }
    return rest;
}

int multiplicacion(int v[])
{
    int mult=1;
    for(int i=0; i<MAX; i++)
    {
        mult=mult*v[i];
    }
    return mult;
}

float division(float v[])
{
    float div=1;
    for(int i=0; i<MAX; i++)
    {
        div=div/(float)v[i];
    }
    return div;
}
