#include <iostream>

using namespace std;

typedef struct nodo
{
    int dato;
    struct nodo* next;
}nodo;

typedef nodo* lista;

void push(lista& testa, int num);
void stampa(lista testa);
void pop(lista& testa);
int top(lista testa);