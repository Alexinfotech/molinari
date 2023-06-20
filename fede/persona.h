#include <iostream>
using namespace std;

class persona
{
    public:
    
    //costruttore
    persona();//inizilizza le proprieta': nome,cognome,stipendio con stringhe vuote.
    //distruttore
    ~persona(){ cout << "oggetto distrutto";}
    //set/get nome
    void setNome(string n){ nome = n; };
    string getNome(){ return nome; }
    //set/get cognome
    void setCognome(string c){ cognome = c;};
    string getCognome(){ return cognome; }
    //set/get stipendio
    void setStipendio(float n){ stipendio = n; }
    float getStipendio(){ return stipendio;}
    //visualizza proprieta' oggetto
    void stampa();
    
    private:
    
    string nome;
    string cognome;
    float stipendio;
};