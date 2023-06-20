#include <iostream>
#include "lib.h"

using namespace std;

pila::pila(int dim) {
    this->dim = dim;
    sp = 0;
}

void pila::push(int num) {
    if(sp < dim) {
        stack[sp] = num;
        sp++;
    }else {
        cout<<"Lo stack e' pieno.";
    }
}

int pila::pop() {
    if(sp > 0) {
        sp--;
    }else {
        cout<<"Lo stack e' vuoto.";
    }
    return stack[sp];
}

void pila::visualizza() {
    for(int i = dim-1; i >= 0; i--) {
        cout<<endl<<stack[i]<<endl;
    }
}