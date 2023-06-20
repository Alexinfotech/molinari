using namespace std;
#include <string>
#include <iostream>
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
    int anni;

public:
    Mansione();
    string get_nome();
    void set_nome( string &nome);
    string get_cognome();
    void set_cognome( string &cognome);
    string get_mansione();
    void set_mansione( string &mansione);
    void inserisci_dati();
    void inserisci_date();
    void estrai_data(const string &data, int &giorno, int &mese, int &anno);
    bool data_valida(int giotno, int mese, int anno);
    bool anno_bisestile(int anno);
    int giorni_nel_mese(int mese, int anno);
    void calcola_differenza_date();
    void stampa();
    void stampa_mesi();
    void giorni_primo_e_ultimo_mese();
};
