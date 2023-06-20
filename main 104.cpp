#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // inizializza il generatore di numeri casuali
    
    // crea un vettore di numeri casuali
    vector<int> numeri;
    for(int i=0; i<10; i++) {
        numeri.push_back(rand() % 10 + 1);
    }
    
    // divide il vettore in due vettori pari e dispari
    vector<int> pari;
    vector<int> dispari;
    for(int i=0; i<numeri.size(); i++) {
        if(numeri[i] % 2 == 0) {
            pari.push_back(numeri[i]);
        }
        else {
            dispari.push_back(numeri[i]);
        }
    }
    
    // visualizza i due vettori
    cout << "Numeri casuali: ";
    for(int i=0; i<numeri.size(); i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    
    cout << "Numeri pari: ";
    for(int i=0; i<pari.size(); i++) {
        cout << pari[i] << " ";
    }
    cout << endl;
    
    cout << "Numeri dispari: ";
    for(int i=0; i<dispari.size(); i++) {
        cout << dispari[i] << " ";
    }
    cout << endl;
    
    return 0;
}
