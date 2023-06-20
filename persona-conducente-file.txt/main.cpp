#include "Persona.h"


int main() {
    // Apre il file in lettura
    FILE* file = fopen("dati.txt", "r");

    // Verifica se l'apertura del file è avvenuta con successo
    if (file == NULL) {
        cout << "Errore nell'apertura del file" << endl;
        return 0;
    }

    // Vector per memorizzare oggetti di tipo "Conducente
    vector<Conducente> conducenti;//dichiara una variabile di tipo "vector" di oggetti "Conducente" chiamata "conducenti

    // Legge i dati dal file riga per riga
    char riga[100];
    while (fgets(riga, 100, file) != NULL) {//file: puntatore al file da cui leggere la riga
        char nome[100], cognome[100], tipo_patente[100], matricola_patente[100];
        int giorno, mese, anno, anno_patente;
        sscanf(riga, "%s %s %d/%d/%d %s %s %d", nome, cognome, &giorno, &mese, &anno, tipo_patente, matricola_patente, &anno_patente);

        // Crea un oggetto Conducente con i dati letti dalla riga del file
        Conducente conducente(nome, cognome, giorno, mese, anno, anno_patente);
        conducente.setTipoPatente(tipo_patente);
        conducente.setMatricolaPatente(matricola_patente);

        
        conducenti.push_back(conducente);// Aggiunge i dati al vettore
    }

    // Chiude il file
    fclose(file);

    // Stampa i dati dei conducenti letti dal file
    for (Conducente& conducente : conducenti) {
        cout << "Dati conducente:" << endl;
        conducente.stampaConducente();

        // Verifica se la patente del conducente è valida
        if (conducente.controllaValiditaPatente()) {
            cout << "La patente del conducente e' valida" << endl;
        } else {
            cout << "La patente del conducente non e' valida per il noleggio" << endl;
        }
    }

    return 0;
}
