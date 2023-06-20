#include <iostream>
#include <string>
using namespace std;

class Contratto {
    string nome;
    string cognome;
    string mansione;
    string dataInizio;
    string dataFine;

public:
    // Costruttore
    Contratto() : nome(""), cognome(""), mansione(""), dataInizio(""), dataFine("") {}

    // Getter e Setter
    string getNome() const { return nome; }
    void setNome(const string &n) { nome = n; }

    string getCognome() const { return cognome; }
    void setCognome(const string &c) { cognome = c; }

    string getMansione() const { return mansione; }
    void setMansione(const string &m) { mansione = m; }

    string getDataInizio() const { return dataInizio; }
    void setDataInizio(const string &di) { dataInizio = di; }

    string getDataFine() const { return dataFine; }
    void setDataFine(const string &df) { dataFine = df; }

    // Metodo per creare un contratto
    void creaContratto() {
        cout << "Inserisci il nome: ";
        getline(cin, nome);

        cout << "Inserisci il cognome: ";
        getline(cin, cognome);

        cout << "Inserisci la mansione: ";
        getline(cin, mansione);

        cout << "Inserisci la data d'inizio (formato DD/MM/YYYY): ";
        do {
            getline(cin, dataInizio);
            if (controllaData(dataInizio)) {
                setDataInizio(dataInizio);
            } else {
                cout << "Inserisci nuovamente la data d'inizio (formato DD/MM/YYYY): ";
            }
        } while (!controllaData(dataInizio));

        cout << "Inserisci la data di fine (formato DD/MM/YYYY): ";
        do {
            getline(cin, dataFine);
            if (controllaData(dataFine)) {
                setDataFine(dataFine);
            } else {
                cout << "Inserisci nuovamente la data di fine (formato DD/MM/YYYY): ";
            }
        } while (!controllaData(dataFine));
    }

    // Metodo per stampare le informazioni del contratto
    void stampa() const {
        cout << "\nInformazioni sul contratto:\n";
        cout << "Nome: " << nome << endl;
        cout << "Cognome: " << cognome << endl;
        cout << "Mansione: " << mansione << endl;
        cout << "Data d'inizio: " << dataInizio << endl;
        cout << "Data di fine: " << dataFine << endl;
    }

    // Metodo per il controllo del formato della data
    bool controllaData(const string &data) const {
        int giorno, mese, anno;
        if (sscanf(data.c_str(), "%d/%d/%d", &giorno, &mese, &anno) == 3) {
            if (giorno >= 1 && giorno <= 31 && mese >= 1 && mese <= 12 && anno >= 2000 && anno <= 3000) {
                if (giorno <= numGiorniMese(mese, anno)) {
                    return true;
                } else {
                    cout << "Il mese inserito non ha abbastanza giorni." << endl;
}
} else {
cout << "La data inserita non e' valida." << endl;
}
} else {
cout << "Il formato della data inserita non e' corretto (DD/MM/YYYY)." << endl;
}
return false;
}
int numGiorniMese(int mese, int anno) const {
    int giorniMese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mese == 2 && annoBisestile(anno)) {
        return 29;
    }
    return giorniMese[mese - 1];
}

// Metodo per determinare se un anno è bisestile
bool annoBisestile(int anno) const {
    return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
}
};

int main() {
Contratto contratto;
contratto.creaContratto();
contratto.stampa();
return 0;
}