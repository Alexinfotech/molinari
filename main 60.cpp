#include <iostream>
using namespace std;


typedef struct nodo {
    int dato;
    nodo* next;
} Nodo;


void inserisci_in_coda(Nodo*& testa, int num);
void stampa_lista(Nodo* testa);

int main() {
    Nodo* testa = NULL; 
    int num;

    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci il " << i+1 << "° numero: ";
        cin >> num;
        inserisci_in_coda(testa, num);
    }


    cout << "La lista contiene: ";
    stampa_lista(testa);

    return 0;
}


void inserisci_in_coda(Nodo*& testa, int num) {
    Nodo* nuovo_nodo = new Nodo;
    nuovo_nodo->dato = num;
    nuovo_nodo->next = NULL;


    if (testa == NULL) {
        testa = nuovo_nodo;
        return;
    }


    Nodo* scorri = testa;
    while (scorri->next != NULL) {
        scorri = scorri->next;
    }
    scorri->next = nuovo_nodo;
}


void stampa_lista(Nodo* testa) {
    Nodo* scorri = testa;
    while (scorri != NULL) {
        cout << scorri->dato << " ";
        scorri = scorri->next;
    }
    cout << endl;
}
