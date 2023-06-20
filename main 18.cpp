#include <iostream>
#include <vector>
using namespace std;

class Numeri {
public:

    virtual void inserisci(int num) = 0;
    virtual void stampa_pari() = 0;
    virtual void stampa_dispari() = 0;
};


class NumeriVector : public Numeri {
public:
    vector<int> numeri;
 
    void inserisci(int num){
        numeri.push_back(num);
    }

  void stampa_pari(){
    cout << "Numeri pari: ";
    for (int i = 0; i < numeri.size(); i++) {
        if (numeri[i] % 2 == 0) {
          cout << numeri[i] << " ";
        }
    }
    cout << endl;
}

void stampa_dispari(){
    cout << "Numeri dispari: ";
    for (int i = 0; i < numeri.size(); i++) {
        if (numeri[i] % 2 != 0) {
            cout << numeri[i] << " ";
        }
    }
    cout << endl;
}
};

int main() {
   
    NumeriVector numeri;
    numeri.inserisci(2);
    numeri.inserisci(32);
    numeri.inserisci(43);
    numeri.inserisci(51);
    numeri.inserisci(66);
    numeri.inserisci(7);
    numeri.inserisci(34);
    numeri.inserisci(67);

    numeri.stampa_pari();
    numeri.stampa_dispari();

    return 0;
}
