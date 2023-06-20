/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int variabileCondivisa = 0;        // area di memoria condivisa         
pthread_mutex_t vuoto;
pthread_mutex_t pieno;     // all'inizio lo settiamo verde dinamicamente 
                                         
void *produttore (void *parametro) {      // codice del processo produttore    
  int contaProduttore = 0;
  while (contaProduttore < 10) {
    pthread_mutex_lock(&vuoto);   // P(possoAccedere) 
    if (variabileCondivisa == 0){         // aspetta buffer vuoto
      variabileCondivisa = ++contaProduttore;       // produci un numero progressivo     
      printf("Prodotto: %d\n", variabileCondivisa);
    }
    pthread_mutex_unlock(&pieno); // V(possoAccedere) per tutti   
  }
  pthread_exit(0);
}

void *consumatore (void *parametro) {     // codice del processo consumatore    
  int contaConsumatore = 0;
  while (contaConsumatore < 10) {
    pthread_mutex_lock(&pieno);   // P(possoAccedere)    
    if (variabileCondivisa > 0 ) {        // aspetta il dato
      contaConsumatore = variabileCondivisa;         // consuma il numero progressivo     
      variabileCondivisa = 0;             // svuota buffer      
      printf("Consumato: %d\n", contaConsumatore);
    }
    pthread_mutex_unlock(&vuoto); // V(possoAccedere) per tutti   
  }
  pthread_exit(0);
}

int main() {
  pthread_t produci;                          // variabili relative ai thread
  pthread_t consuma;
  pthread_mutex_init(&vuoto, NULL);   // inizializzo il semaforo a libero   
    
  pthread_create(&produci, NULL, produttore, NULL);    // creo il produttore
  pthread_create(&consuma, NULL, consumatore, NULL);   // creo il consumatore
  pthread_join(produci, NULL);                // attesa terminazione dei figli
  pthread_join(consuma, NULL);

  pthread_mutex_destroy(&vuoto);      // distruzione dei semafori
  pthread_mutex_destroy(&pieno);
}