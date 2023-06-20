#include <iostream>
using namespace std;

class persona{
                private:
                        string cognome;
                        string nome;
                        float stipendio;
                        

    
 public:
 persona(){ // costruttore con parametri di default
     cognome = "";
     nome = "";
     stipendio = 0;
};
 
~persona(){ cout << "\n\n oggetto formattato\a";} //distruttore
 persona(string cognome , string nome,int stipendio){ // costruttore
         
        this-> cognome = cognome;
        this->   nome = nome;
        this->    stipendio = stipendio; 
};
    
    void stampa(){                   
         cout << "\n\ncognome---:" << this->cognome << "\nnome------:" << this-> nome << "\nstipendio-:" << this->stipendio;
}  


    void setCognome(string cog){
                                cognome = cog ;}
    string getCognome(){
                        return cognome;}
    
    
    void setNome(string nom){
                            nome = nom ;}
    string getNome(){
                    return nome;}
    
    
    void setStipendio(float s){
                                stipendio = s ;}
    int    getStipendio(){
                             return stipendio;}

};

    
int main() {
        
    persona obj ("Tornabene","Alessandro",  3500 );
    obj.stampa();
    persona obj1("Bianchi","Carlo", 3500);
    obj1.stampa();
             
    obj.setCognome("Rossi");// controllo parametri usando il set
    obj.setNome("Mario");
    obj.setStipendio (3500);

    cout << "\n\ncognome---:" // return get
                          << obj.getCognome()<< endl;
    cout << "nome------:" 
                          << obj.getNome() << endl;
    cout << "stipendio-:"
                          << obj.getStipendio();

    return 0;
}

