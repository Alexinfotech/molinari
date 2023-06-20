#include <iostream>
#include <stdio.h>
using namespace std;



class lista{


public:

lista(lista& testa, int num);
void push(lista& testa, int num);
void popstack(lista& testa);
void popcoda(lista& testa);
void stampa(lista testa);
int top(lista testa);



private:
typedef struct nodo
{
    int dato;
    struct nodo* next;
}nodo;
};