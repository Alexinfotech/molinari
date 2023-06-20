#include <iostream>
using namespace std;

class A {   //classe    
  public:   // accesso     
    string nome;  
    string cognome;  
    string posizione,inail;
    int numero,matricola,studente;
    A(string a, string b, string c, int d); // metodo costruttore dichiarazione
};


A::A(string a, string b, string c, int d) {  // costruttore fuori dalla classe definizione
    nome = a;
    cognome = b;
    posizione,inail = c;
    numero,matricola,studente=d;
    
}

int main() {  
   
    
    string a;
    cout <<" nome     :";
    cin >> a;
    
    string b;
    cout <<" cognome  :";
    cin >> b;
    
    string c;
    cout <<" posizione inail           :";
    cin >>c;
    
    string d;
    cout <<" numero matricola studente :";
    cin >>d;
    
    
    
    
  


 
 cout   <<   " nome      "                  << a << "\n"
        <<   " cognome   "                  << b<< "\n" 
        <<   " posizione inail           "  << c << "\n"
        <<   " numero matricola studente "  << d;

  return 0;
}

