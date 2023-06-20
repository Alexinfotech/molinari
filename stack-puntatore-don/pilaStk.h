using namespace std;
#include <iostream>
#include <stdio.h>


class pilaStk {
    
            public:
                pilaStk(); //costruttore senza parametri; che inizializza tutte le tue proprieta' nel private (vedi nel pilaStk.cpp)
                void insDim(int dim);
                int getDim();
                void push(int num);
                void pop(); //Cambio il tipo della tua fuznione, perche' non restituiva niente
                void visualizza();
                    
                    
                    
            private:
                //Ho tolto int i perche' si puo' dichiarare direttamente nel ciclo for; giusto anche per rendere il tuo programma pulito e chiaro :D
                int* vettoreStack; //Cambio il tuo variabile di tipo puntatore da v a nome vettoreStack cosi' non confondi cose
                int dim; //Questa e' la variabile dimensione che appunto conterra' il valore della dimensione del tuo vettore
                int sp; //La variabile stack  pointer; quello che dicevamo che si spostava; Definizione generale: si trova sempre nella prima posizione LIBERA del vettore
};