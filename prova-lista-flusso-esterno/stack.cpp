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


void print_list(lista& testa, lista& temp)
    {
        temp = testa;
        
        if(temp != NULL)
            {
                while(temp != NULL)
                    {
                        cout<<temp -> data<<"\n";
                        
                        temp = temp -> next;
                    }
            }
    }