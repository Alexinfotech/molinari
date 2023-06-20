#include <string>
#include <vector>
#include <iostream>
//#include <ctime>

using namespace std;

class Prodotto {
public:
//Il costruttore prende come parametri il nome, il prezzo e la quantità del prodotto e 
//inizializza le variabili membro "nome_", "prezzo_" e "quantita_" con questi valori tramite 
//la lista di inizializzazione dei membri.
Prodotto(string nome, double prezzo, int quantita)
        : nome_(nome), prezzo_(prezzo), quantita_(quantita) {}
// Metodo che restituisce il valore della variabile membro "nome_"
    string getNome()  { return nome_; }
// Metodo che restituisce il valore della variabile membro "prezzo_"
    double getPrezzo()  { return prezzo_; }
// Metodo che restituisce il valore della variabile membro "quantita_"
    int getQuantita()  { return quantita_; }
    // Metodo che modifica il valore della variabile membro "quantita_"
    void setQuantita(int quantita) { quantita_ = quantita; }

private:
    string nome_;
    double prezzo_;
    int quantita_;
};

class Scontrino {
public:
// Costruttore che inizializza la variabile membro "importoMassimo_"
Scontrino(double importoMassimo)
        : importoMassimo_(importoMassimo) {}
// Metodo che aggiunge un prodotto alla lista degli acquisti effettuati
    void aggiungiProdotto(Prodotto& prodotto) {
// Verifica se il totale della spesa corrente supera l'importo massimo prestabilito
// blocco di codice che può sollevare un'eccezione
  
    if (prodotto.getQuantita() <= 0) {
        throw "Il prodotto non è disponibile in magazzino.";
    }
    if (totale_ + prodotto.getPrezzo() > importoMassimo_) {
        throw "Il totale della spesa supera l'importo massimo prestabilito.";
    }
// Aggiunge il prodotto alla lista degli acquisti effettuati
    prodotti_.push_back(prodotto);
// Aggiorna la quantità del prodotto disponibile in magazzino    
    prodotto.setQuantita(prodotto.getQuantita() - 1);
// Aggiorna il totale della spesa corrente    
    totale_ += prodotto.getPrezzo();
}

// Metodo che restituisce il totale della spesa corrente
    double calcolaTotale()  {
        return totale_;
    }
// Metodo che stampa a video la lista degli acquisti effettuati e il totale della spesa corrente
    void stampaScontrino()  {
        cout << "Lista degli acquisti effettuati:" << endl;
        for ( Prodotto& prodotto : prodotti_) {
            cout << "- " << prodotto.getNome() << ": " << prodotto.getPrezzo() << " euro" <<endl;
        }
        cout << "Totale della spesa: " << totale_ << " euro" << endl;
    }
// Metodo che stampa a video la data e l'ora correnti
void printCurrentDateTime() {
    time_t now = time(0);
    tm* localTime = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
    cout << "Data e ora: " << buffer << endl;
}
private:
    vector<Prodotto> prodotti_;//vettore di oggetti di tipo "Prodotto" che rappresenta la lista degli acquisti effettuati.
    double importoMassimo_;//rappresenta l'importo massimo che il cliente può spendere
    double totale_ = 0.0;//rappresenta il totale della spesa corrente. È inizializzato a 0.0 e può essere modificato solo a
//attraverso i metodi pubblici della classe "Scontrino".
};
int main() {
 //inserimento prodotti oggetto nella vector con push_back 
    Prodotto mela("Mela", 0.5, 10);
    Prodotto banana("Banana", 1.0, 8);
    Prodotto uva("Uva", 2.5, 5);

    
    double budgetMassimo = 1.0;//valore budget
    Scontrino scontrino(budgetMassimo);

 try {
    
    scontrino.aggiungiProdotto(mela);
    scontrino.aggiungiProdotto(banana);
    scontrino.aggiungiProdotto(uva);
    scontrino.printCurrentDateTime(); 
    scontrino.stampaScontrino();

} catch ( const char* c) {    
// blocco di codice che gestisce l'eccezione
cout << "Errore: " << c << endl;
}

    return 0;
}



