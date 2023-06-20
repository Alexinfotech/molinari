#include "mansione.h"
Mansione::Mansione(){}
string Mansione::get_nome(){ 
    return nome; }
void Mansione::set_nome( string &nome){ 
    this->nome = nome; }
string Mansione::get_cognome(){ 
    return cognome; }
void Mansione::set_cognome( string &cognome){ 
    this->cognome = cognome; }
string Mansione::get_mansione(){ 
    return mansione; }
void Mansione::set_mansione( string &mansione){ 
    this->mansione = mansione; }

void Mansione::inserisci_dati() {
        cout << "Inserisci nome: ";
        getline(cin, nome);
        cout << "Inserisci cognome: ";
        getline(cin, cognome);
        cout << "Inserisci mansione: ";
        getline(cin, mansione);
}
void Mansione::estrai_data(const string &data, int &giorno, int &mese, int &anno) {
    sscanf(data.c_str(), "%2d/%2d/%4d", &giorno, &mese, &anno);
}
void Mansione::inserisci_date() {
  int anno1, mese1, giorno1, anno2, mese2, giorno2;
    bool data_valida_inserita;
    
    do {
        cout << "Inserisci la data iniziale (formato GG/MM/AAAA): ";
        cin >> data_iniziale;
        estrai_data(data_iniziale, giorno1, mese1, anno1);
        data_valida_inserita = data_valida(giorno1, mese1, anno1);
        if (!data_valida_inserita) {
            cout << "La data inserita non è valida. Riprova." << endl;
        }
    } while (!data_valida_inserita);
    
    do {
        cout << "Inserisci la data finale (formato GG/MM/AAAA): ";
        cin >> data_finale;
        estrai_data(data_finale, giorno2, mese2, anno2);
        data_valida_inserita = data_valida(giorno2, mese2, anno2);
        if (!data_valida_inserita) {
            cout << "La data inserita non è valida. Riprova." << endl;
        }
    } while (!data_valida_inserita);
    
    if (anno1 > anno2 || (anno1 == anno2 && mese1 > mese2) || (anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2)) {
        cout << "La data iniziale è successiva alla data finale. Riprova." << endl;
        return;
    }
    
    calcola_differenza_date();
}
bool Mansione::data_valida(int giorno, int mese, int anno) {
    if (anno < 1950 || anno > 2024) return false;
    if (mese < 1 || mese > 12) return false;
    if (giorno < 1 || giorno > giorni_nel_mese(mese, anno)) return false;
    return true;
}

bool Mansione::anno_bisestile(int anno) {
        return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
}

int Mansione::giorni_nel_mese(int mese, int anno) {
 int giorni_mese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (anno_bisestile(anno) && mese == 2) {
            return 29;
        }
        return giorni_mese[mese - 1];
    }

void Mansione::calcola_differenza_date() {
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
        this-> giorni=giorni + 1;
        this-> anni=giorni / 365;
}
void Mansione::stampa() {
        cout << "Nome: " << get_nome() << endl;
        cout << "Cognome: " << get_cognome() << endl;
        cout << "Mansione: " << get_mansione() << endl;
        cout << "Differenza tra le date è di: \n"  << "Settimane  -> " << settimane_totali << " e Giorni -> " << giorni_totali << "\nDi cui giorni totali -> " << giorni << endl;}
void Mansione::stampa_mesi() {
    int anno1, mese1, giorno1, anno2, mese2, giorno2;
    estrai_data(data_iniziale, giorno1, mese1, anno1);
    estrai_data(data_finale, giorno2, mese2, anno2);
    if (anno1 > anno2 || (anno1 == anno2 && mese1 > mese2) || (anno1 == anno2 && mese1 == mese2 && giorno1 > giorno2)) {
        cout << "La data iniziale è successiva alla data finale. Riprova." << endl;
        return;
    }
    // Stampa l'intestazione della tabella
    cout << "\nIn dettaglio\n";
    cout << "TABELLA DEI MESI COMPRESI TRA LE DATE\n";
    cout << "\tMese\tGiorni" << endl;
    cout << "\t----\t------" << endl;
    // Stampa i dati dei mesi
    int giorni_totali = 0;
    int mesi_totali = 0;
    int anni_totali = 0;
    cout << "\t" <<  anno1 << "/" <<  mese1 << "\t" << giorno1 << endl;
    for (int anno = anno1; anno <= anno2; anno++) {
        int mese_inizio = (anno == anno1) ? mese1 : 1;
        int mese_fine = (anno == anno2) ? mese2 : 12;
        for (int mese = mese_inizio+1; mese <= mese_fine-1; mese++) {
            int giorni_mese = giorni_nel_mese(mese, anno);
            cout << "\t" << anno << "/" << mese << "\t" << giorni_mese << endl;
            giorni_totali += giorni_mese;
            mesi_totali++;
        }
    }
    cout << "\t" << anno2 << "/" << mese2 << "\t" << giorno2 << endl;
    anni_totali = mesi_totali / 12;
    mesi_totali %= 12;
    cout << "\nTotale anni -> " << anni_totali << endl;
    cout << "Totale mesi -> " << mesi_totali << endl;
    
    
    estrai_data(data_iniziale, giorno1, mese1, anno1);
    estrai_data(data_finale, giorno2, mese2, anno2);

    // giorni del primo mese
    int giorni_primo_mese = giorni_nel_mese(mese1, anno1) - giorno1 + 1;
    // giorni dell'ultimo mese
    int giorni_ultimo_mese = giorno2;
    cout << "Totale giorni residui -> "  << giorni_primo_mese+giorni_ultimo_mese << endl;
    cout << "Primo mese -> " << giorni_primo_mese << endl;
    cout << "Ultimo mese -> " << giorni_ultimo_mese << endl;
    
}

