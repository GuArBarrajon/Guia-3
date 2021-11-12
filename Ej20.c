/*
Programa: Ej20.c
Descripción: Realice un programa en C que lea una cadena y diga cuantas vocales hay.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<string.h>


void cargarFrase(char f[]);
int buscarVocales(char f[]);


void main()
{
    int frase[100];
    cargarFrase(frase);
    printf("%s tiene %d vocal(es).\n", frase, buscarVocales(frase));
}

void cargarFrase(char f[])
{
    printf("Ingrese una palabra o frase: ");
    gets(f);
}

int buscarVocales(char f[])
{
    int vocal=0;
    for(int i=0; f[i]!='\0'; i++)
    {
        if(f[i]=='A' || f[i]=='a' || f[i]=='E' || f[i]=='e' || f[i]=='I' || f[i]=='i' || f[i]=='O' || f[i]=='o' || f[i]=='U' || f[i]=='u')
        {
            vocal++;
        }
    }
    return vocal;
}
