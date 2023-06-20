#include <iostream>

using namespace std;

class Studente {
    public:
   
        Studente(string nome, string cognome);
        void setVoti(int voto);
        void getVoti();
        void mediaVoti();
        
    private:
        int curr = 0;
        int* c;
        int ultimo;
        int voto;
        int* v;
   
        int media;
        int voti[10];
        double temp;
        double dcurr;
        string nome, cognome;
        string getNome();
        string getCognome();
        
};