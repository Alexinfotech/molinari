#include <iostream>
#include <string>
using namespace std;

class Mansione {
private:
    string nome;
    string cognome;
    string mansione;
    string data_iniziale;
    string data_finale;
    int giorni;
    int settimane_totali;
    int giorni_totali;
public:
Mansione() : settimane_totali(0), giorni_totali(0) {}
    string get_nome()  { return nome; }
    void set_nome( string &n) { nome = n; }
    string get_cognome()  { return cognome; }
    void set_cognome( string &c) { cognome = c; }
    string get_mansione()  { return mansione; }
    void set_mansione( string &m) { mansione = m; }
void inserisci_dati() {
        cout << "Inserisci nome: ";
        getline(cin, nome);
        cout << "Inserisci cognome: ";
        getline(cin, cognome);
        cout << "Inserisci mansione: ";
        getline(cin, mansione);
    }
void inserisci_date() {
        int anno1, mese1, giorno1, anno2, mese2, giorno2;
        do {
            cout << "Inserisci la data iniziale (formato GG/MM/AAAA): ";
            cin >> data_iniziale;
            estrai_data(data_iniziale, giorno1, mese1, anno1);
            if (!anno_valido(anno1)) {
                cout << "L'anno iniziale deve essere compreso tra il 1950 e il 2024. Riprova." << endl;
            }
        } while (!anno_valido(anno1));
        do {
            cout << "Inserisci la data finale (formato GG/MM/AAAA): ";
            cin >> data_finale;
            estrai_data(data_finale, giorno2, mese2, anno2);
            if (!anno_valido(anno2)) {
                cout << "L'anno finale deve essere compreso tra il 1950 e il 2024. Riprova." << endl;
            }
        } while (!anno_valido(anno2));
        if (anno1 > anno2 || (anno1 == anno2 && mese1 > mese2) || (anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2)) {
            cout << "La data iniziale è successiva alla data finale. Riprova." << endl;
            return;
        }
    calcola_differenza_date();
    }

void estrai_data( string& data, int& giorno, int& mese, int& anno) {
        sscanf(data.c_str(), "%2d/%2d/%4d", &giorno, &mese, &anno);
    }
bool anno_valido(int anno) {
    return anno >= 1960 && anno <= 2024;
    }
bool anno_bisestile(int anno) {
        return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
    }

    int giorni_nel_mese(int mese, int anno) {
        int giorni_mese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (anno_bisestile(anno) && mese == 2) {
            return 29;
        }
        return giorni_mese[mese - 1];
    }

void calcola_differenza_date() {
        int anno1, mese1, giorno1, anno2, mese2, giorno2;
        estrai_data(data_iniziale, giorno1, mese1, anno1);
        estrai_data(data_finale, giorno2, mese2, anno2);
        if (anno1 > anno2 || (anno1 == anno2 && mese1 > mese2) || (anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2)) {
            cout << "La data iniziale è successiva alla data finale. Riprova." << endl;
            return;
        }
        int giorni = 0;
        int anni, mesi;
        for (anni = anno1; anni < anno2; anni++) {
            giorni += anno_bisestile(anni) ? 366 : 365;
        }
        for (mesi = 1; mesi < mese1; mesi++) {
            giorni -= giorni_nel_mese(mesi, anno1);
        }
        giorni -= giorno1;
        for (mesi = 1; mesi < mese2; mesi++) {
            giorni += giorni_nel_mese(mesi, anno2);
        }
        giorni += giorno2;
        settimane_totali = giorni / 7;
        giorni_totali = giorni % 7;
        this-> giorni=giorni+1;
        
    }

    void stampa() {
        cout << "Nome: " << get_nome() << endl;
        cout << "Cognome: " << get_cognome() << endl;
        cout << "Mansione: " << get_mansione() << endl;
        cout << "Differenza tra le date è di: \n " << "Settimane -> " << settimane_totali << " e Giorni -> " << giorni_totali << "\nDi cui giorni totali -> " << giorni << endl;
    }
};
int main() {
Mansione persona;
    persona.inserisci_dati();
    persona.inserisci_date();
    persona.stampa();

    return 0;
}





