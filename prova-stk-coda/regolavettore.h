
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
////////interfaccia//////////
class regolavettore {
    
        public:
         regolavettore(); //costruttore Stack e coda senza parametri; 
                void insDim(int dimStk);
                int getDim();
                void push(int num);
                void pop(); 
                void visualizzaStk();//visualizzazione migliorata, visualizza il vettore in verticale
                // regolavettore();//costruttore Coda senza parametri; 
                void insDimx(int dimCoda);
                void ins(int dato);
                void circolare();
                bool spazio();
                void visualizzacoda();  
        private:
               
            int* vettoreStack;//puntatore vettore Stack
                int dim;//dimensione Stack
                int sp;
                
            int* vettoreCoda;//puntatore vettore coda
                int inizio;//primo spazio libero
                int fine;//l'ultimo spazio disponibile
                int lunghezza;//confronta con dim per verifica se sia pieno il vettore
                int dimCoda;//dimensione Coda
};