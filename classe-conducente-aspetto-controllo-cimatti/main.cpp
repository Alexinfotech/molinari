#include "Persona.h"
int main() {
// Crea un oggetto Persona
    Persona persona("Giordano", "Blu", 12, 6, 1990);
// Stampa i dati dell'oggetto Persona
    cout << "Dati persona:" << endl;
    persona.stampa();
// Verifica se la persona è maggiorenne
    if (persona.isMaggiorenne()) {
        cout << "La persona e' maggiorenne" << endl;
    } else {
        cout << "La persona non e' maggiorenne" << endl;
    }
// Calcola l'età della persona
    int eta = persona.calcolaEta();
    cout << "La persona ha " << eta << " anni" << endl;
// Crea un oggetto Conducente
    Conducente conducente("Giordano", "Blu", 12, 6, 1990, 2023);
// Stampa i dati del conducente
    cout << "Dati conducente:" << endl;
    conducente.stampaConducente();
// Imposta il tipo e la matricola della patente del conducente
    conducente.setTipoPatente("B");
    conducente.setMatricolaPatente("AA1111ZZ");
// Verifica se la patente del conducente è valida
    if (conducente.controllaValiditaPatente()) {
       cout << "La patente del conducente e' valida" << endl;
    } else {
        cout << "La patente del conducente non e' valida per il noleggio" << endl;
    }
return 0;
}