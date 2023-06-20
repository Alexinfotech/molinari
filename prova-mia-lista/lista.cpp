#include <iostream>
#include "lista.h"
using namespace std;

void push(lista& testa, int num)
{
    lista nuovoNodo = new nodo;
    nuovoNodo->dato = num;
    nuovoNodo->next = testa;
    testa = nuovoNodo;
}

void stampa(lista testa)
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

void pop(lista& testa)
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

int top(lista testa)
{
    return testa->dato;
}