#include "tipCoda.h"

using namespace std;

tipCoda::tipCoda(){
    v = NULL;//puntatore dimensione, corretto errore sintassi dichiarazione puntatore nel costruttore senza parametri
  
}

void tipCoda::insDim(int dim){
    this->dim=dim;
    v=new int[dim];
    s = 0; //inserisci partendo dalla cella 0
    z = -1;// estrai partendo da fuori vettore dalla testa 
    for(int i=0;i<dim;i++){
        v[i]=-1;//migliorata sintassi 
        
    }
    
    
}

int tipCoda::getDim(){
return dim;
}
          
void tipCoda::insnum(int num,int dim){
    
    if(s < dim){
        v[s] = num;
                s++;}
    else{
        cout<<"               !!-ALT-!! \n";
        cout<<"          La coda e' piena!!! \n";
        cout<<"Per oggi non accettiamo più appuntamenti\n";
        cout<<"             ripassa domani\n";}
}

void tipCoda::estrnum(int dim){
     
     
    if(z < dim-1){//non riesco a visualizzare messaggio coda vuota quando trova il valore -1 
    //o quando l'indice z incontra indice scon sintassi||  if(z == s)
    //ma solo quando l'indice z esce dal vettore, allora in questo caso l'else parte in funzione
    //e visualizza messaggio coda vuota
            
            ++z;//cambiata sintassi indice z, 
            cout<<endl<<"il numero estratto é"<<endl<<v[z];
            v[z]= -1;}
    else{
        cout<<"La coda è vuota";
        return;
    }
        
    
}

void tipCoda::visualizza(){
    
    for(int i = dim-1; i >=0; i--){// migliorata visualizzazione grafica
        cout<<"| "<<v[i]<<" ";}
}