#include <iostream>
#include <string>
using namespace std;

class Certificato {
public:
    virtual void stampa_certificato(string nome, string cognome, string comune_di_residenza, string via_di_residenza, string numero_civico, string cap,string giorno, string mese, string anno, string data_odierna) = 0;

    static void inserisci_dati_utente(string &nome, string &cognome, string &comune_di_residenza, string &via_di_residenza, string &numero_civico, string &cap, string &giorno, string &mese, string &anno, string &data_odierna) {
        
    cout << "Inserisci nome --> ";
    getline(cin, nome);
    cout << "Inserisci cognome --> ";
    getline(cin, cognome);
    cout << "Inserisci comune di domiciliazione --> ";
    getline(cin, comune_di_residenza);
    cout << "Inserisci via di domiciliazione --> ";
    getline(cin, via_di_residenza);
    cout << "Inserisci numero civico --> ";
    getline(cin, numero_civico);
    cout << "Inserisci CAP --> ";
    getline(cin, cap);
    cout << "Inserisci data di nascita : " << endl;
    cout << "giorno --> ";
    getline(cin, giorno);
    cout << "mese --> ";
    getline(cin, mese);
    cout << "anno --> ";
    getline(cin, anno);
    }
};

class Certificato_nascita : public Certificato {
public:
    void stampa_certificato(string nome, string cognome, string comune_di_residenza, string via_di_residenza, string numero_civico, string cap, string giorno, string mese, string anno, string data_odierna) override {
        string comune_di_nascita;

        cout << "Inserisci comune di nascita --> ";
        cin >> comune_di_nascita;
        cout << "\nCOMUNE DI MILANO\n";
        cout << "Estratto per riassunto di atto di nascita\n";
        cout << "\nCertificato di nascita\n";
       
        cout << "\nIl Signore/a " << nome << " " << cognome << "\n domiciliato in " << via_di_residenza << " " << numero_civico << " - " << cap << " " << comune_di_residenza << endl;
        
        time_t t = time(nullptr);
        tm* now = localtime(&t);
        char buffer[80];
        strftime(buffer, 80, "%d/%m/%Y", now);
        data_odierna = buffer;
        cout <<"in data odierna : " << data_odierna << endl;
        cout << "si certifica quanto riportato:\n";
        cout << "\n nato a " << comune_di_nascita << " il " << giorno << "/" << mese << "/" << anno << endl;
    }
};

class Certificato_matrimonio_civile : public Certificato {
public:
    void stampa_certificato(string nome, string cognome, string comune_di_residenza, string via_di_residenza, string numero_civico, string cap, string giorno, string mese, string anno, string data_odierna) override {
        string giorno_m, mese_m, anno_m, comune_matrimonio, regime_patrimoniale;
        cout << "Data matrimonio --> ";
        cout << "giorno --> ";
        cin >> giorno_m;
        cout << "mese --> ";
        cin >> mese_m;
        cout <<"anno --> " ;
       
        cout << "Inserisci comune matrimonio --> ";
        cin >> comune_matrimonio;
        cout << "Inserisci regime patrimoniale --> ";
        cin >> regime_patrimoniale;
        cout << "\nCOMUNE DI MILANO\n";
        cout << "Estratto per riassunto di Stato Civile\n";
        time_t t = time(nullptr);
        tm* now = localtime(&t);
        char buffer[80];
        strftime(buffer, 80, "%d/%m/%Y", now);
        data_odierna = buffer;
        cout <<"in data odierna : " << data_odierna << endl;
        cout << "\nIl Signore/a " << nome << " " << cognome << "\n residente in " << via_di_residenza << " " << numero_civico << " - " << cap << " " << comune_di_residenza << endl;
        cout << "si certifica quanto riportato:\n";
        cout << "sposato a " << comune_matrimonio << "\ncon regime patrimoniale di " << regime_patrimoniale << endl;
}
};

int main() {
    Certificato_nascita CN;
    Certificato_matrimonio_civile CMC;

    string nome, cognome, comune_di_residenza, via_di_residenza, numero_civico, cap, giorno, mese, anno, data_di_nascita, data_odierna;
    Certificato::inserisci_dati_utente(nome, cognome, comune_di_residenza, via_di_residenza, numero_civico, cap, giorno, mese, anno, data_odierna);

    int scelta;
    cout << "Scegli il certificato da stampare:" << endl;
    cout << "1. Certificato di nascita" << endl;
    cout << "2. Certificato di matrimonio civile" << endl;
    cout << "Inserisci il numero corrispondente al certificato desiderato: ";
    cin >> scelta;

    switch (scelta) {
        case 1:
            CN.stampa_certificato(nome, cognome, comune_di_residenza, via_di_residenza, numero_civico, cap, giorno, mese, anno, data_odierna);
            break;
        case 2:
            CMC.stampa_certificato(nome, cognome, comune_di_residenza, via_di_residenza, numero_civico, cap, giorno, mese, anno, data_odierna);
            break;
        default:
            cout << "Scelta non valida." << endl;
            break;
    }

    return 0;
}
