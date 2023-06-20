#include "lista.h"

lista::lista(lista& testa, int num){
//lista testa = NULL; 
 typedef nodo* lista;
}

void lista::push(lista& testa, int num)
{
    lista nuovoNodo = new nodo;
    nuovoNodo->dato = num;
    nuovoNodo->next = testa;
    testa = nuovoNodo;
}
void lista::ricerca(lista testa, int num)
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

void lista::sortIns(lista& testa, int num)
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
            if(num < testa->dato)//inserimento in testa
            {
                nuovo->next = testa;
                testa = nuovo;
                break;
            }
            else if(scorri->next->dato > num)//dato che il controllo sulla testa è gia stato fatto
            {                           //controllo l elemento successivo a quello puntato da (scorri)
                                        //se è > inserisci elemento tra (scorri) e il successivo
                nuovo->next = scorri->next;
                scorri->next = nuovo; 
                break;
            }
            else if(scorri->next->next == NULL)//inserimento in coda
            {
                nuovo->next = NULL;
                scorri->next->next = nuovo;
                break;
            }
            scorri = scorri->next;//incremento scorri
        }
    }
}
void lista::popcoda(lista& testa)
{
    if(testa == NULL)
    {
        cout << "lista vuota." << endl;
    }
    else
    {
        testa = testa->next;
    }
}
void lista::popstack(lista& testa)
{
    if(testa == NULL)
    {
        cout << "lista vuota." << endl;
    }
    else
    {
        NULL = next->testa;
    }
}

void lista::stampa(lista testa)
{
    lista scorri = testa;
    if(scorri != NULL)
    {
        cout << "[ ";
        while(scorri != NULL)
        {
            if((scorri->next == NULL))
            {
                cout << scorri->dato << " ]" << endl;
            }
            else
            {
                cout << scorri->dato << ", ";
            }
            scorri = scorri->next;
        }
    }
    else
    {
        cout << "lista vuota." << endl;
    }
}



int lista::top(lista testa)
{
    return testa->dato;
}