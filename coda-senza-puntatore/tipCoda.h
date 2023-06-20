using namespace std;
#include <iostream>
#include <stdio.h>


class tipCoda {
    
public:
    tipCoda();//costruttore senza parametri
    void insDim(int dim);//inserisci dimensione
    int getDim();
    void insnum(int num,int dim);//inserisci numero per entrare in coda
    void estrnum(int dim);//estrai numero dalla coda
    void visualizza();
        
        
        
private:
    int i;
    int z;//indice estrai
    int s;//indice inserisci
    int *v;//puntatore per la dimensione
    int dim;
   // int coda[]; non ha senso se utilizzo il puntatore per descrivere il vettore
};