#include <iostream>
using namespace std;



class Padre {
  public:
  int a;
  string b;
  Padre(int x): a(x), b("io sono una stringa della class Padre\n "){};
  // void stampa() {
  virtual void stampa() {//aggiunto virtul per dare il permesso al padre di utilizzare gli ingredineti 
  //dell'oggetto dato dall'indirizzo
      cout << "Sono la stampa del padre il padre." << endl;
    }
};

class Figlio : public Padre {
  public:
  Figlio(int x): Padre::Padre(x){
   
};
 void stampa() {
      cout << "Sono la stampa del il figlio." << endl;
    }
};

class Nipote : public Figlio {
  public:
  Nipote(int x): s("sono la stringa privata del nipote"),Figlio::Figlio(x){cout<<s<<endl;
};
  private:
  string s;

void stampa() {
      cout << "Sono la stampa del nipote." << endl;
    }
};


int main() {
  
  Nipote n(55);
  Padre *p;//puntatore di tipo padre
  //*p.stampa();
  Figlio f(666);
  p = &f;//passaggio indirizzo oggetto figlio al padre
  p->stampa();
  p= &n;//passaggio indirizzo oggetto nipote al padre
  p->stampa();
  //NB:è bastato dare la regola virtual al nonno per pter raggiungere la stmpa nipote
  return 0;
}




