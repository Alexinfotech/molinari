/******************************************************************************
in questo programma creo un eccezione se non trova il test.txt
e una seconda eccezione quando apre il file test2.txt che volutamente senza contenuto:
con try{ metto sotto ossservazione il blocco di codice che solleva due eccezioni differenti.
l'eccezione viene intercettata da catch(...) che intercetta un eccezione di quialsissi tipo
ho volutamente usato catch(...), in alternativa potrei gestire con catch(tipo) per distinguere
le 2 eccezioni
il primo throw solleva l'eccezione quando non trova il file inserito da tastiera
il secondo thow solleva l'eccezione se si seleziona test2.txt in quamto il file è vuoto
*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    char testo[200];
    cout << "NOME FILE test.txt con testo" << endl;
    cout << "NOME FILE test2.txt senza testo per generare eccezione file vuoto" << endl;
    cout << "QUALSIASI altro nome file non esistente per generare eccezione file non trovato" << endl;
    cout << "Inserisci il nome del file da aprire: --> " ;
    cin >> testo;
FILE* p = fopen(testo, "r");;
    try{//metto sotto osservazione questo blocco di istruzioni
        if (!p) {
            throw"";//sollevo l'eccezione se non trova il file 
    }
    int contenuto = fgetc(p);//fgetc funzione per leggere un carattere nel file aperto
    //mi sono fatto aiutare da gpt per questa riga di codice[if (contenuto == EOF) ]
        if (contenuto == EOF) {//EOF fine del FILE per segnalare che non 
        //ci sono piu dati da leggere 
            throw"";//sollevo eccezione se non trova contenuto file 
    }
 cout << "Contenuto del file: " << endl;
        while (contenuto != EOF) {
            cout << (char)contenuto;//stampa il contenuto trovato nel file test.txt
            contenuto = fgetc(p);    } 
    }
    catch (...) {//intercetta qualsiasi tipo di eccezione, in questo caso non vengono
    //gestite in maniera consona, ma viene semplicemente generato un messsaggio a video
    //con la fuoriuscita del programma da return 2.
        cout << "Ho intercettato un eccezione: Il file non esieste o il file trovato è vuoto "  << endl;//messaggio intercettazione errore
        fclose(p);
        return 2;// uscita da applicazione se non trova il file o il testo
}
    fclose(p);
    return 0;
}
