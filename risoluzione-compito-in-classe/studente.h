#include <stdio.h>
#include <iostream>



using namespace std;

class studente {
    public:
    studente(int =0,int = 0,int = 0);
    
       void setData();
       void getData();
       void stampaMese();
   
    studente(string nome, string cognome);
   
        void setVet(int voto);
        void getVet();
        void mediaVet();
        int media;
        
    private:
        
        int aa=0;
        int gg=0;
        int mm=0;
        int giorno;
        int mese;
        int anno; 
        int curr = 0;
        int* c;
        int ultimo;
        int voto;
        int* v;
        int vet[10];
        
        double temp;
        double acurr;
        
        string nome, cognome;
        string getNome();
        string getCognome();
        
};