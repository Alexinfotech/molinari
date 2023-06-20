#include "pilaStk.h"

using namespace std;

pilaStk::pilaStk(){
   int *v = NULL;
   int *s = NULL;
}

void pilaStk::insDim(int dim){
    v=new int[dim];
    this->dim=dim;
    s=new int[sp];
    int *s = 0;
}

int pilaStk::getDim(){
    return dim;
}
          
void pilaStk::push(int num){
    if(*s < dim){
        stack[*s] = num;
                (*s)++;}
    else{
        cout<<"Lo stack e' pieno.";}
}

int pilaStk::pop(){
    if(*s > 0){
            (*s)--;}
    else{
        cout<<"Lo stack e' vuoto.";}
return *s;
}

void pilaStk::visualizza(){
    for(int i = dim-1; i >= 0; i--){
        cout<<endl<<stack[*v+i]<<endl;}
}