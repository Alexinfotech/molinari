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
// costruttore per inizializzare le variabili settimane_totali e giorni_totali 
//a zero quando viene creata un'istanza della classe Mansione.
/*Questa parte di codice definisce il costruttore della classe Mansione e i metodi 
getter e setter per le variabili nome, cognome e mansione.
Il costruttore Mansione() è utilizzato per inizializzare le variabili settimane_totali 
e giorni_totali a zero quando viene creata un'istanza della classe Mansione.
I metodi getter (get_nome(), get_cognome() e get_mansione()) restituiscono il valore delle v
ariabili nome, cognome e mansione, rispettivamente, mentre i metodi setter (set_nome(), 
set_cognome() e set_mansione()) impostano il valore delle variabili nome, cognome e mansione, 
rispettivamente, utilizzando i valori passati come parametro.
In sintesi, questa parte di codice definisce il modo in cui è possibile accedere e modificare 
i valori delle variabili della classe Mansione.*/
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
// Metodo per inserire le date dall'utente e verificare la validità delle date inserite
/*Questa parte di codice definisce una funzione membro della classe Mansione chiamata inserisci_date(), 
i inizio e fine di un periodo di lavoro. La funzione utilizza la funzione membro anno_valido() 
per verificare che l'anno inserito sia valido (compreso tra il 1960 e il 2024), e utilizza la 
funzione membro estrai_data() per estrarre giorno, mese e anno dalle stringhe inserite dall'utente. 
he che la data di inizio sia antecedente alla data di fine, e in caso contrario richiede all'utente 
amente le date. Infine, viene chiamata la funzione membro calcola_differenza_date() per calcolare la 
e e salvare il risultato nelle variabili settimane_totali e giorni_totali.*/
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
// Funzione per estrarre giorno, mese e anno da una stringa di data nel formato "GG/MM/AAAA"
void estrai_data( string& data, int& giorno, int& mese, int& anno) {
        sscanf(data.c_str(), "%2d/%2d/%4d", &giorno, &mese, &anno);
    }
/*Questa parte di codice definisce una funzione che prende in input un intero 
rappresentante un anno e restituisce un valore booleano. La funzione restituisce 
"true" se l'anno è compreso tra 1960 e 2024, altrimenti restituisce "false". 
In altre parole, la funzione verifica se l'anno inserito è valido o meno.*/
bool anno_valido(int anno) {
    return anno >= 1960 && anno <= 2024;
    }
// Verifica se un anno è bisestile
bool anno_bisestile(int anno) {
        return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
    }
// Ritorna il numero di giorni in un mese tenendo conto dell'anno bisestile
/*Questa parte di codice definisce una funzione giorni_nel_mese che prende in input il numero del mese
e l'anno e restituisce il numero di giorni di quel mese. La funzione utilizza un array giorni_mese 
o di giorni per ogni mese dell'anno non bisestile. Se l'anno è bisestile e il mese è febbraio, 
la funzione restituisce 29, altrimenti restituisce il numero di giorni dal corrispondente elemento 
dell'array giorni_mese. La funzione anno_bisestile viene utilizzata per determinare se l'anno in 
ione è bisestile.*/
    int giorni_nel_mese(int mese, int anno) {
        int giorni_mese[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (anno_bisestile(anno) && mese == 2) {
            return 29;
        }
        return giorni_mese[mese - 1];
    }
// Calcola la differenza tra due date e restituisce il risultato in giorni e settimane
/*Questa funzione, calcola_differenza_date(), si occupa di calcolare la differenza tra due date, 
o prese dall'oggetto Mansione tramite le stringhe data_iniziale e data_finale.
Prima di calcolare la differenza, vengono estratti i valori di giorno, mese e anno 
delle due date usando la funzione estrai_data().
Viene poi effettuato un controllo per verificare che la data iniziale non sia successiva 
alla data finale. In caso contrario, viene stampato un messaggio di errore e la funzione termina.
Successivamente, viene effettuato il calcolo della differenza tra le date in termini di giorni, 
endo dall'anno e dal mese della data iniziale e sommando il numero di giorni di ogni mese 
fino alla fine dell'anno, per poi ripetere l'operazione per tutti gli anni intercorsi tra la data 
a finale.
Infine, il numero di giorni totale viene diviso per 7 per ottenere il numero di settimane, 
mentre il resto modulo 7 rappresenta i giorni rimanenti.
Alla fine, il valore ottenuto viene memorizzato negli attributi settimane_totali e giorni_totali 
'oggetto Mansione, che verranno poi utilizzati per la stampa della differenza tra le date.*/
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
// Metodo per stampare la differenza tra le due date in settimane e giorni
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



