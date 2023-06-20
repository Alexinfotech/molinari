/*Questa porzione di codice è l'header guard, ovvero una tecnica utilizzata per evitare che l'header file venga incluso più volte nello stesso codice sorgente. Questo è necessario perché se lo stesso header file viene incluso più volte, ci possono essere problemi di definizione di variabili, duplicati e altri errori durante la compilazione del codice.

L'header guard è un meccanismo che si basa sulla definizione di un nome simbolico (nel nostro caso, "PERSONA_H") che viene verificato dal preprocessore del compilatore, in modo da evitare la definizione ripetuta delle classi, delle funzioni e delle variabili dichiarate nell'header file.
*/
#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void maiusc(string* str);//funzione che converte la prima lettera di una stringa in maiuscolo
class Persona
{
    public:
    //costruttore
    Persona(string nome, string cognome, int gg, int mm, int aa);
    //medoti set/get
    string getNome(){ return *nome; }
    string getCognome(){ return *cognome; }
    string getData(){ return *data_nascita; }
    void setNome(string nome);
    void setCognome(string cognome);
    void setData(int gg, int mm, int aa);
    int getGiorno(){ return gg; }
    int getMese(){ return mm; }
    int getAnno(){ return aa; }
    
    void stampa();//stampa i dati dell oggetto persona 
    bool isMaggiorenne();//ritorna true se la persona e' maggiorenne altrimenti ritorna false
    int calcolaEta();//ritorna l'eta della persona
    void operator =(Persona op);//assegna a un oggetto Persona chiamante i dati di un oggetto Persona passato come parametro
    bool operator ==(Persona op);//ritorna true se gli oggetti Persona hanno la stessa eta', altrimenti ritorna false
    bool operator < (Persona op);//ritorna true se il primo oggetto ha un eta' < del secondo, altrimenti ritorna false
    bool operator > (Persona op);//ritorna true se il primo oggetto ha un eta' > del secondo, altrimenti ritorna false
    bool operator <=(Persona op);
    bool operator >=(Persona op);
    protected:
    string* nome;
    string* cognome;
    string* data_nascita;
    
    private:
    //questi metodi sono private perchè servono ai metodi interni alla classe
    bool bisestile();//verifica se l'anno (membro: aa) e' bisestile
    bool checkData();//verifica che la data inserita gg/mm/aa sia corretta
    int checkMese();//restituisce il numero di giorni del mese corrispondente alla data di nascita 
    int gg;//rappresenta giorno della data di nascita
    int mm;//rappresenta mese della data di nascita
    int aa;//rappresenta l'anno della data di nascita
};
class Conducente : public Persona {
public:
    Conducente(string nome, string cognome, int gg, int mm, int aa,int AnnoAcquisizionePatente)
        : Persona(nome, cognome, gg, mm, aa) {this->AnnoAcquisizionePatente = AnnoAcquisizionePatente;}
    void setTipoPatente(string tipoPatente) {
        TipoPatente = tipoPatente;
    }
    string getTipoPatente() {
        return TipoPatente;
    }
    void setMatricolaPatente(string matricolaPatente) {
        MatricolaPatente = matricolaPatente;
    }
    string getMatricolaPatente() {
        return MatricolaPatente;
    }
    void setAnnoAcquisizionePatente(int annoAcquisizionePatente) {
        AnnoAcquisizionePatente = annoAcquisizionePatente;
    }
    int getAnnoAcquisizionePatente() {
        return AnnoAcquisizionePatente;
    }
    
    bool controllaValiditaPatente();//controllo validità patente per il noleggio
    void stampaConducente();//metodo stampa conducente
    
    
private:
    string TipoPatente;
    string MatricolaPatente;
    int AnnoAcquisizionePatente;
    
};

#endif // PERSONA_H