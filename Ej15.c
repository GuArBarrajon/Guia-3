/*
Programa: Ej15.c
Descripción: Realice un programa en C que pinte un tablero de ajedrez, los peones con la letra P, las torres con T, los caballos con
C, los alfiles con A, el rey con R y la reina con M.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


void cargarMatriz(char v[8][8]);
void imprimirMatriz(char v[8][8]);

void main()
{
    char tablero[8][8];
    cargarMatriz(tablero);
    printf("Tablero de Ajedrez\n");
    imprimirMatriz(tablero);
}

void cargarMatriz(char v[8][8])
{
    for(int i=0; i<8; i++)          //filas
    {
        for(int j=0; j<8; j++)      //columnas
        {
            if(i==1 || i==6)   //peones 'P'
            {
                v[i][j]='P';
            }
            else
            {
                if((i==0 && j==0) || (i==0 && j==7) || (i==7 && j==0) || (i==7 && j==7))  //torres  'T'
                {
                    v[i][j]='T';
                }
                else
                {
                    if((i==0 && j==1) || (i==0 && j==6) || (i==7 && j==1) || (i==7 && j==6))  //caballos 'C'
                    {
                        v[i][j]='C';
                    }
                    else
                    {
                        if((i==0 && j==2) || (i==0 && j==5) || (i==7 && j==2) || (i==7 && j==5))  //alfiles 'A'
                        {
                            v[i][j]='A';
                        }
                        else
                        {
                            if((i==0 && j==3) || (i==7 && j==3))    //reina 'M'
                            {
                                v[i][j]='M';
                            }
                            else
                            {
                                if((i==0 && j==4) || (i==7 && j==4))   //rey 'R'
                                {
                                    v[i][j]='R';
                                }
                                else
                                {
                                    v[i][j]='_';   //marca casillas del tablero donde no hay fichas todavía
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void imprimirMatriz(char v[8][8])
{
    for(int i=0; i<8; i++)          //filas
    {
        for(int j=0; j<8; j++)      //columnas
        {
            printf(" %c", v[i][j]);
        }
        printf("\n");
    }
}