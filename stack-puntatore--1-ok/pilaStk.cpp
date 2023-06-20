#include "pilaStk.h"

using namespace std;

pilaStk::pilaStk(){
   int *v = NULL;
   int *s = NULL;
   
}

void pilaStk::insDim(int dim){
    v=new int[dim];
    this->dim=dim;
    s=new int[dim];
    int *s = 0;
    for(int i=0;i<dim;i++){
        stack[i]=-1;
        
    }
    
    
}

int pilaStk::getDim(){
return dim;
}
          
void pilaStk::push(int num,int dim){
    
    if(*s < dim){
        stack[*s] = num;
                (*s)++;}
    else{
        cout<<"Lo stack e' pieno.";}
}

void pilaStk::pop(){
    if(*s > 0){
            (*s)--;
            cout<<endl<<"il dato estratto è"<<endl<<stack[*s];
            stack[*s]=-1;}
    else{
        cout<<"Lo stack e' vuoto.";}
}

void pilaStk::visualizza(){
    
    for(int i = dim-1; i >=0; i--){
        cout<<endl<<"<<"<<stack[*v+i]<<endl;}
}