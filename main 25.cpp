#include <string>
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

class Prodotto {
public:
    Prodotto(string nome, double prezzo, int quantita)
        : nome_(nome), prezzo_(prezzo), quantita_(quantita) {}

    string getNome() const { return nome_; }
    double getPrezzo() const { return prezzo_; }
    int getQuantita() const { return quantita_; }
    void setQuantita(int quantita) { quantita_ = quantita; }

private:
    string nome_;
    double prezzo_;
    int quantita_;
};

class Scontrino {
public:
    Scontrino(double importoMassimo)
        : importoMassimo_(importoMassimo) {}

  void aggiungiProdotto(Prodotto& prodotto) {
    if (prodotto.getQuantita() <= 0) {
        throw invalid_argument("Il prodotto non è disponibile in magazzino.");
    }
    if (totale_ + prodotto.getPrezzo() > importoMassimo_) {
        throw invalid_argument("Il totale della spesa supera l'importo massimo prestabilito.");
    }
    prodotti_.push_back(prodotto);
    prodotto.setQuantita(prodotto.getQuantita() - 1);
    totale_ += prodotto.getPrezzo();
}


    double calcolaTotale() const {
        return totale_;
    }

    void stampaScontrino() const {
        cout << "Lista degli acquisti effettuati:" << endl;
        for (const Prodotto& prodotto : prodotti_) {
            cout << "- " << prodotto.getNome() << ": " << prodotto.getPrezzo() << " euro" <<endl;
        }
        cout << "Totale della spesa: " << totale_ << " euro" << endl;
    }
void printCurrentDateTime() {
    time_t now = time(0);
    tm* localTime = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
    cout << "Data e ora: " << buffer << endl;
}
private:
    vector<Prodotto> prodotti_;
    double importoMassimo_;
    double totale_ = 0.0;
};
int main() {
    
    Prodotto mela("Mela", 0.5, 10);
    Prodotto banana("Banana", 1.0, 8);
    Prodotto uva("Uva", 2.5, 5);

    
    double budgetMassimo = 10.0;
    Scontrino scontrino(budgetMassimo);

 try {
    
    scontrino.aggiungiProdotto(mela);
    scontrino.aggiungiProdotto(banana);
    scontrino.aggiungiProdotto(uva);

    
    scontrino.printCurrentDateTime(); 

    scontrino.stampaScontrino();

} catch (const invalid_argument& e) {
    cout << "Errore: " << e.what() << endl;
}

    return 0;
}

