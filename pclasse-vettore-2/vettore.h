#include <stdio.h>
#include <iostream>

using namespace std;

class vettore
{
private:
       int dim;
        int* v;//dichiarazione di variabile puntatore di tipo interio 
               //punta indirizzo generato nella heap e all'interno del vettore 
               //genera indirizzo 
               //(*v)=riferito al valore interno alla cella
        int i;
        int s;
        int m;
        int p;
        int max;
        int min;
        
public:
    void insDim(int dim);
    int getDim();
    vettore();//costruttore senza parametri
    vettore(int dim); //vettore(int dim, int* v)//costruttore con parametri
    void carica();//richiama carica elemensti vettore inseriti da utente
    void stampa();//stampa i valori inseriti e nelle varie posisizioni
    void somma();//richiama somma valori inseriti
    void med();//richiamamedia valori inseriri
    void MAX_MIN();// richiama valore massimo e minimo
    void POS_MAX();//richiama posizione valore massimo
    void POS_MIN();//richiama posizione valore minimo
   
  
};