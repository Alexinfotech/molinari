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
    Contratto(const string& n, const string& c, const string& m, const string& di, const string& df)
        : nome(n), cognome(c), mansione(m), dataInizio(di), dataFine(df) {}

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
    static Contratto creaContratto() {
        string nome, cognome, mansione, dataInizio, dataFine;

        cout << "Inserisci il nome: ";
        getline(cin, nome);

        cout << "Inserisci il cognome: ";
        getline(cin, cognome);

        cout << "Inserisci la mansione: ";
        getline(cin, mansione);
do {
        cout << "Inserisci la data d'inizio (formato DD/MM/YYYY): ";
        getline(cin, dataInizio);
        while (!controllaData(dataInizio)) {
            cout << "Inserisci nuovamente la data d'inizio (formato DD/MM/YYYY): ";
            getline(cin, dataInizio);
        }

        cout << "Inserisci la data di fine (formato DD/MM/YYYY): ";
        getline(cin, dataFine);
        while (!controllaData(dataFine)) {
            cout << "Inserisci nuovamente la data di fine (formato DD/MM/YYYY): ";
            getline(cin, dataFine);
        }

        if (dataInizio >= dataFine) {
            cout << "La data d'inizio deve essere inferiore alla data di fine. Inserisci nuovamente le date." << endl;
        } else {
            break;
        }
    } while (true);

    return Contratto(nome, cognome, mansione, dataInizio, dataFine);
}
        // Metodo per il controllo del formato della data
    static bool controllaData(const string &data) {
        int giorno, mese, anno;
        if (sscanf(data.c_str(), "%d/%d/%d", &
giorno, &mese, &anno) == 3) {
if (giorno >= 1 && giorno <= 31 && mese >= 1 && mese <= 12 && anno >= 1960 && anno <= 2024) {
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
static int numGiorniMese(int mese, int anno) {
    int giorniMese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mese == 2 && annoBisestile(anno)) {
        return 29;
    }
    return giorniMese[mese - 1];
}

// Metodo per determinare se un anno è bisestile
static bool annoBisestile(int anno) {
    return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
}
static int numGiorniAnno(int anno, int mese) {
        int giorniMese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (annoBisestile(anno)) {
            giorniMese[1] = 29;
        }
        int giorniTotali = 0;
        for (int i = 0; i < mese; i++) {
            giorniTotali += giorniMese[i];
        }
        return giorniTotali;
    }
// Metodo per calcolare la differenza in giorni tra due date
static int calcoloDifferenzaGiorni(const string& data1, const string& data2) {
    int giorniMese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int giorno1, mese1, anno1, giorno2, mese2, anno2;

    sscanf(data1.c_str(), "%d/%d/%d", &giorno1, &mese1, &anno1);
    sscanf(data2.c_str(), "%d/%d/%d", &giorno2, &mese2, &anno2);

    int giorniTotali = 0;
    if (anno2 > anno1 || (anno2 == anno1 && mese2 > mese1) || (anno2 == anno1 && mese2 == mese1 && giorno2 >= giorno1)) {
        for (int i = anno1; i < anno2; i++) {
            giorniTotali += (annoBisestile(i) ? 366 : 365);
        }
        for (int i = mese1; i <= 12; i++) {
            giorniTotali += numGiorniMese(i, anno1) - giorno1;
            giorno1 = 0;
        }
        for (int i = 1; i < mese2; i++) {
            giorniTotali += numGiorniMese(i, anno2);
        }
        giorniTotali += giorno2;
    }
    return giorniTotali;
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

 
};

int main() {
Contratto contratto = Contratto::creaContratto();
contratto.stampa();
int giorniLavorati = numGiorniSolari(contratto.getDataInizio(), contratto.getDataFine());
cout << "Numero di giorni lavorati: " << giorniLavorati << endl;

return 0;
}