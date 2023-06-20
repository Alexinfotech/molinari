/*
https://github.com/AleMaty78/gerarchia-/blob/7c6fd1b0c3916e5169e63ee06223fb418ccfdc07/main.cpp

PROVA GERACHIA DI TRE CLASSI. 
IL PARAMETRO STRING COGNOME CLASS NONNO = Public PASSA CON REGOLA DI PASSAGGIO protected
PARAMETRO NOME PRIVATO PER OGNI CLASSE
METODO STAMPA DELLA CLASSE NONNO VIENE RICHIAMATO DA TUTTE LE CLASSI
*/

#include <iostream>
using namespace std;

// Definizione della classe Nonno
class Nonno {
    private:
        string nome; // Dichiarazione di una variabile di tipo stringa  privata "nome"
    public:
        string cognome; // Dichiarazione di una variabile di tipo stringa pubblica "cognome"
        Nonno(string nome, string cognome):// Costruttore della classe Nonno con parametri "nome" e "cognome"
        nome(nome),//inizializza l'attributo privato nome della classe Nonno con il valore passato come parametro
        cognome(cognome){//inizializza l'attributo privato cognome della classe Nonno con il valore passato come parametro.
        } 
    void stampa() { // Definizione del metodo "stampa" della classe Nonno
        cout << "Nome : " << nome << "   ";
        cout << "Cognome : " << cognome << endl; 
        }
    };
// Definizione della classe Figlio che eredita dalla classe Nonno con regola di passaggio pubblica
class Figlio : protected Nonno {
   private:
        string nome;
    public:
      Figlio(string nome, string cognome):// Costruttore della classe Figlio 
        Nonno(nome,cognome){//viene chimato il costruttore nonno passa i parametri nome cognome nella classe figlio
            }
  void stampa() { // Definizione del metodo "stampa" della classe Figlio
        Nonno::stampa(); // Chiamata del metodo "stampa" della classe Nonno
        }
    };
// Definizione della classe Nipote che eredita dalla classe Figlio con regola di passaggio pubblica
class Nipote : protected Figlio {
    private:
        string nome;
    public:
      Nipote(string nome, string cognome):// Costruttore della classe Nipote che chiama il costruttore della classe Figlio 
        Figlio(nome,cognome){
        } 
    void stampa() {
        Figlio::stampa();
        }
    };
int main() {
    // Creazione di un oggetto a di tipo Nonno 
    Nonno a("Giacomo", "Tornabene");
    // Creazione di un oggetto b di tipo Figlio 
    Figlio b("Michele", "Tornabene-2");
    // Creazione di un oggetto c di tipo Nipote
    Nipote c("Alessandro", "Tornabene-3");
    cout<<"NONNO"<<endl;
    // Chiamata del metodo "stampa" dell'oggetto "a"
    a.stampa();
    cout<<"FIGLIO"<<endl; 
    b.stampa();
    cout<<"NIPOTE"<<endl;
    c.stampa();
    return 0;
}
