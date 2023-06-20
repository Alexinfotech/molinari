#include "regolavettore.h"

regolavettore::regolavettore(){ //Questo costrutto ha il lavoro di INIZZIALIZZARE il valore delle  proprieta' NEL PRIVATE
//**********stack////////*****************************
    vettoreStack = NULL; //punto a NULL il puntatore Stack  
    sp = 0; //Lo stackpointer al momento si trova nella prima posizione libera.
   //this->dim = 5;
//**********coda/////////*******************************
    vettoreCoda=NULL;//
    this->inizio=-1;//L'indice coda si trova fuori dal vattore alla posizione -1
    this->fine=0;
    this->lunghezza=0;
}

void regolavettore::insDim(int dimStk){
    this->dim=dimStk;
    vettoreStack=new int[dim];
    
    for(int i = 0; i < dim; i++){ //ciclo di azzeramento vettore valore scelto è 0
        *(vettoreStack + i) = 0;
            }
}
int regolavettore::getDim(){
return dim;
}
          
void regolavettore::push(int num){
    if(sp < dim){ //Controlliamo che il vettore non e' pieno
        *(vettoreStack + sp) = num; //*(vettoreStack + sp) vuol dire l'indirizzo di partenza + 4 byte
                sp++;}
        else{
            cout<<"Lo stack e' pieno.";}
}

void regolavettore::pop(){
    if(sp > 0){ //Qui controlliamo che il vettore non sia uscito dal vettore
            sp--;
                cout<<"|"<<*(vettoreStack + sp)<<"|"; //stampa il valore estratto dal vettore
                    *(vettoreStack + sp) = 0;}
        else{
            cout<<"Lo stack e' vuoto.";}
}

void regolavettore::visualizzaStk(){
    cout<<endl;
        for(int i = dim-1; i >=0; i--){
            cout<<"|"<<*(vettoreStack+i)<<"|"<<endl;}
}
///////////////////////////////////////////////////////////////////////////////*/

void regolavettore::insDimx(int dimCoda)
{
    this->dim=dimCoda;
        vettoreCoda=new int[this->dim];
            for(int i=0;i<this->dim;i++){
                //*(vettorecoda + i) vuol dire l'indirizzo di partenza + 4 byte
                    *(vettoreCoda+i)=-1;//azzeramento coda a -1
    };
    this->inizio=-1;
    this->fine=0;
    this->lunghezza=0;
    
}
void regolavettore::ins(int dato)
{
    if(spazio()==true){
        *(vettoreCoda+this->fine)=dato;
            this->lunghezza++;
                this->fine=(this->fine+1)%this->dim;
    }
        else{
            cout<<"Non c'è più posto in coda"<<endl;
    };
}
    
void regolavettore::circolare()
{
    if(this->lunghezza!=0){
        cout<<"|"<<*(vettoreCoda+inizio+1)<<"|"<<endl;
            *(vettoreCoda+((this->inizio+1)%this->dim))=-1;
                this->inizio=(this->inizio+1)%this->dim;
                    this->lunghezza--;
    }
        else{
            cout<<"La coda è vuoto"<<endl;
    };
    
}

bool regolavettore::spazio()
{
        if(this->lunghezza<this->dim){  //=nel vettore c'è ancora spazio 
            return true;
        }
            else if(this->lunghezza==0){   //=il vettore è vuoto
                return false;
        }
    return 0;
}


void regolavettore::visualizzacoda(){
    cout<<"|";
        for(int i=0;i<this->dim;i++){
            cout<<*(vettoreCoda+i)<<"|";
    };
    cout<<""<<endl;
}