#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MAX 20
using namespace std;
class quadrato{
    
public:

quadrato();
void presentazione();
void controllo_presentazione();
void quadrato_ins();
void stampa();
void controllo();
void somma_base();
void somma_colonna();
void colonna_discendente();
void colonna_ascendente();
void controllo_finale();

private:

int N,i,j,i1,j1;
int valido,somma,sommabase,magico;
int q[MAX] [MAX];

};
