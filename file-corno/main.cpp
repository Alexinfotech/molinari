/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define LUNPROD 20
#define MAXPROD 1000
#define LUNFILE 80

int main(int argc, char *argv[])
{
    int NP = 0;
    char nome[MAXPROD][LUNPROD+1];
    int qta[MAXPROD];
    
char nomefile [MAXPROD][LUNPROD+1];
FILE *f;

if(argc!=2)
{
    printf("ERRORE: numero di parametri errato\n");
    printf("Occore specificare il nome del file che contiene il magazzino");
    exit(1);
}

    f = fopen(argv[1], "r");

    strcpy(nomefile,argv[1]);
    f = fopen(nomefile,"r");
    
    if(f==NULL)
    {
        printf("ERRORE: impossibile prire il file %s\n", nomefile);
        exit(1);
    }
    












fclose(f);
    return 0;
}
