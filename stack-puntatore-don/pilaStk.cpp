#include "pilaStk.h"

using namespace std;

pilaStk::pilaStk(){ //Questo costrutto ha il lavoro di INIZZIALIZZARE il valore delle tue proprieta' NEL PRIVATE
   vettoreStack = NULL; //punto a NULL il puntatore dichiarato nel pilaStk.h
   sp = 0; //Lo stackpointer lo inizzializzo a 0 cioe' al momento si trova nella prima posizione libera.
   this->dim = 5;
}

void pilaStk::insDim(int dim){
    this->dim=dim;
    vettoreStack=new int[dim];
    
    for(int i = 0; i < dim; i++) //Questo e' iltuo ciclo di azzeramento
        {
            *(vettoreStack + i) = -1;
        }
}

int pilaStk::getDim(){
return dim;
}
          
void pilaStk::push(int num){
    
    if(sp < dim){ //Controlliamo che il vettore non e' pieno
        *(vettoreStack + sp) = num; //*(vettoreStack + sp) vuol dire l'indirizzo di partenza + 4 byte
                sp++;}
    else{
        cout<<"Lo stack e' pieno.";}
}

void pilaStk::pop(){
    if(sp > 0){ //Qui controlliamo che il vettore non esce dal vettore (scusa non so i termini da usare ahah)
            sp--;
            cout<<endl<<*(vettoreStack + sp); //Aggiungo quest'istruzione; Cioe' stampa quello che hai estratto dal vettore
            *(vettoreStack + sp) = -1;}
    else{
        cout<<"Lo stack e' vuoto.";}
}

void pilaStk::visualizza(){
    cout<<endl;
    for(int i = dim-1; i >=0; i--){
        cout<<*(vettoreStack+i)<<" "<<endl;}
}