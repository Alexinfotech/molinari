#include <iostream>
#include "stack.h"

using namespace std;

void push(lista& testa, int number)
    {
        lista nuovo_nodo = new nodo;
        nuovo_nodo -> data = number;
        nuovo_nodo -> next = testa;
        testa = nuovo_nodo;

    }

void pop(lista& testa, lista& temp)
    {
        lista del;
        
        if(testa != NULL)
            {
                del = testa;
                temp = testa -> next;
                cout<<"\n\nIl numero estratto e': "<<testa -> data;
                delete del;
                testa = temp;
            }
        else
            {
                cout<<"\n\nLa lista e' vuota!";
            }
    }

void print_list(lista& testa, lista& temp)
    {
        temp = testa;
        
        if(temp != NULL)
            {
                while(temp != NULL)
                    {
                        cout<<temp -> data<<" ";
                        temp = temp -> next;
                    }
            }
    }