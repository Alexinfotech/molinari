#include <iostream>
using namespace std;
// https://github.com/AleMaty78/nome-cognome-anni-gerarchia/blob/78cc7dfc60860be6194bac03b3abf92fedf78338/main.cpp
class Nonni {
private:
//proprietà
    string nome;        
    string nomeMoglie;
    string cognomeMoglie;
    int anniMarito;
    int anniMoglie;
public:
//proprietà
string cognome;
//costruttore con  parametri,inizializza le priprietà della classe
    Nonni(string nome, string cognome, int anniMarito, string nomeMoglie, string cognomeMoglie, int anniMoglie):
        nome(nome), 
        cognome(cognome),
        anniMarito(anniMarito),
        nomeMoglie(nomeMoglie), 
        cognomeMoglie(cognomeMoglie),
        anniMoglie(anniMoglie){
    } 
    void stampa() {//metodo stampa
        cout << "Nome marito: " << nome << "   ";
        cout << "Cognome marito: " << cognome << "   ";
        cout << "Anni: " << anniMarito << endl;
        cout << "Nome moglie: " << nomeMoglie << "   ";
        cout << "Cognome moglie: " << cognomeMoglie << "   ";
        cout << "Anni: " << anniMoglie << endl;
    }
};

class Figli : protected Nonni {
private:
    string nome;
    string nomeMoglie;
    string cognomeMoglie;
    int anniMarito;
    int anniMoglie;
public:
    Figli(string nome, string cognome, int anniMarito, string nomeMoglie, string cognomeMoglie, int anniMoglie ) :
        Nonni(nome, cognome, anniMarito, nomeMoglie, cognomeMoglie, anniMoglie ),
        nome(nome),
        nomeMoglie(nomeMoglie),
        cognomeMoglie(cognomeMoglie) {
    }
    void stampa() {
        Nonni::stampa();
    }
};

class Nipoti : protected Figli {
private:
    string nome;
    string nomeMoglie;
    string cognomeMoglie;
    int anniMarito;
    int anniMoglie;
public:
    Nipoti(string nome, string cognome, int anniMarito, string nomeMoglie, string cognomeMoglie, int anniM) :
        Figli(nome, cognome, anniMarito, nomeMoglie, cognomeMoglie, anniMoglie) {
    }
    void stampa() {
        Figli::stampa();
    }
};

int main() {
    FILE *file = fopen("generalià.txt", "a");
    string nome, cognome, nomeMoglie, cognomeMoglie;
    int anniMarito, anniMoglie;
    cout<<"NONNI"<<endl;
    cout << "Inserisci nome marito -> ";
    do {
    if (cin >> nome) {
        if (nome >= "A" && nome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome marito -> ";
       do {
    if (cin >> cognome) {
        if (cognome >= "A" && cognome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni marito -> ";
    do {
    if (cin >> anniMarito) {
        if (anniMarito >= 1 && anniMarito <= 130) {
            break;
        }
    } 
    
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
      
} while (true);
    cout << "Inserisci nome moglie -> ";
       do {
    if (cin >> nomeMoglie) {
        if (nomeMoglie >= "A" && nomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome moglie -> ";
       do {
    if (cin >> cognomeMoglie) {
        if (cognomeMoglie >= "A" && cognomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni moglie -> ";
 do {
    if (cin >> anniMoglie) {
        if (anniMoglie>= 1 && anniMoglie <= 130) {
            break;
        }
    }
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
    
} while (true);
    cout<<endl;
    cout<<"DATI INSERITI"<<endl;
    fprintf(file, "MARITO\nNome: %s   Cognome: %s   anni: %d\nMOGLIE\nNome: %s   Cognome: %s   anni: %d\n", &nome[0], &cognome[0], anniMarito, &nomeMoglie[0], &cognomeMoglie[0], anniMoglie);
    Nonni a(nome, cognome, anniMarito, nomeMoglie, cognomeMoglie, anniMoglie);
    a.stampa();
    cout<<endl;
    
    cout<<"FIGLI"<<endl;
  cout << "Inserisci nome marito -> ";
    do {
    if (cin >> nome) {
        if (nome >= "A" && nome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome marito -> ";
       do {
    if (cin >> cognome) {
        if (cognome >= "A" && cognome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni marito -> ";
    do {
    if (cin >> anniMarito) {
        if (anniMarito >= 1 && anniMarito <= 130) {
            break;
        }
    } 
    
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
      
} while (true);
    cout << "Inserisci nome moglie -> ";
       do {
    if (cin >> nomeMoglie) {
        if (nomeMoglie >= "A" && nomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome moglie -> ";
       do {
    if (cin >> cognomeMoglie) {
        if (cognomeMoglie >= "A" && cognomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni moglie -> ";
 do {
    if (cin >> anniMoglie) {
        if (anniMoglie>= 1 && anniMoglie <= 130) {
            break;
        }
    }
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
    
} while (true);
    cout<<endl;
    cout<<"DATI INSERITI"<<endl;
    fprintf(file, "MARITO\nNome: %s   Cognome: %s   anni: %d\nMOGLIE\nNome: %s   Cognome: %s   anni: %d\n", &nome[0], &cognome[0], anniMarito, &nomeMoglie[0], &cognomeMoglie[0], anniMoglie);
    Figli b(nome, cognome, anniMarito, nomeMoglie, cognomeMoglie, anniMoglie);
    b.stampa();
    cout<<endl;
    
    cout<<"NIPOTI"<<endl;
  cout << "Inserisci nome marito -> ";
    do {
    if (cin >> nome) {
        if (nome >= "A" && nome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome marito -> ";
       do {
    if (cin >> cognome) {
        if (cognome >= "A" && cognome <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni marito -> ";
    do {
    if (cin >> anniMarito) {
        if (anniMarito >= 1 && anniMarito <= 130) {
            break;
        }
    } 
    
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
      
} while (true);
    cout << "Inserisci nome moglie -> ";
       do {
    if (cin >> nomeMoglie) {
        if (nomeMoglie >= "A" && nomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci cognome moglie -> ";
       do {
    if (cin >> cognomeMoglie) {
        if (cognomeMoglie >= "A" && cognomeMoglie <= "z") {
            break;
        }
    }
    cout << "Errore: devi inserire una stringa Reinserisci -> ";
    
} while (true);
    cout << "Inserisci anni moglie -> ";
 do {
    if (cin >> anniMoglie) {
        if (anniMoglie>= 1 && anniMoglie <= 130) {
            break;
        }
    }
    cout << "Errore: devi inserire un valore numerico compreso tra 1 e 130. Reinserisci -> ";
    
} while (true);
    cout<<endl;
    cout<<"DATI INSERITI"<<endl;
    fprintf(file, "MARITO\nNome: %s   Cognome: %s   anni: %d\nMOGLIE\nNome: %s   Cognome: %s   anni: %d\n", &nome[0], &cognome[0], anniMarito, &nomeMoglie[0], &cognomeMoglie[0], anniMoglie);
    Nipoti c(nome, cognome, anniMarito, nomeMoglie, cognomeMoglie, anniMoglie);
    c.stampa();
fclose(file);
    return 0;
}
   

