/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "lista.h"
using namespace std;
void ricerca(lista testa, int num)
{
    lista scorri = testa;
    bool check = false;
    if(testa == NULL)
    {
        cout << "lista vuota." << endl;
    }
    else
    {
        for (int i = 0; scorri != NULL; i++) {
            if(scorri->dato == num)
            {
                cout << "elemento ricercato: " << num << "\ntrovato alla " << i+1<< "° posizione della lista." << endl;
                stampa(testa);
                cout << "[" << i << "]: " << num << endl;
                check = true;
            }
            scorri = scorri->next;
        }
    }
    if(check == false)
    {
        cout << "elemento cercato: " << num << " non e' presente nella lista" << endl;
    }
}

void sortIns(lista& testa, int num)
{
    lista nuovo = new nodo;//nuovo nodo lista
    lista scorri = testa;//puntatore che scorre la lista
    nuovo->dato = num;
    if(testa == NULL)//lista vuota: inserimento in testa
    {
        nuovo->next = testa;
        testa = nuovo;
    }
    else if(testa->next == NULL)//lista con un solo elemento
    {
        if(scorri->dato < num)//se l elemento è < del num da inserire: inserimento in coda
        {
            testa->next = nuovo;
        }
        else//inserimento in testa
        {
            nuovo->next = testa;
            testa = nuovo;
        }
    }
    else//lista con piu elementi
    {
        while(scorri != NULL)//vai avanti fintanto che scorri è diverso da NULL(fine lista)
        {
            if(scorri->next->dato > num)//dato che il controllo sulla testa è gia stato fatto
            {                           //controllo l elemento successivo a quello puntato da (scorri)
                                        //se è > inserisci elemento tra (scorri) e il successivo
                nuovo->next = scorri->next;
                scorri->next = nuovo;
                break;
            }
            scorri = scorri->next;//incremento scorri
        }
    }
}
int main()
{
    lista testa = NULL;
    sortIns(testa,12);
    sortIns(testa,1);
    stampa(testa);
    return 0;
}