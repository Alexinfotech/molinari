#include <stdio.h>
#include <iostream>

using namespace std;

class vettore
{
private:
    int* v;
    int dim;
    int i;

public:
    void insDim(int dim);
    int getDim();
 
    vettore();//costruttore senza parametri
    vettore(int dim);
    //vettore(int dim, int* v);//costruttore con parametri
    void carica();
    void stampa();
  
};