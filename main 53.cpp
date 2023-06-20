/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
class interi {
private:
        int dim;
        int vettore[100];//dim max 100
public:
        interi(int dim) : dim(dim) {
            for(int i = 0; i < dim; i++) {
                vettore[i] = 0;
            }
        }

        void stampa() {
            for(int i = 0; i < dim; i++) {
                cout << vettore[i] << endl;
            }
        }
};

class decimali : public interi {
private:
        float dim;
        float vettore[100];//dim max 100
public:
        decimali(float dim) : interi(dim), dim(dim) {
            for(int i = 0; i < dim; i++) {
                vettore[i] = 0.0;
            }
        }

        void stampa() {
            interi::stampa();
        }
};

int main() {
    int dim;
    cout << "Inserisci la dimensione del  vettore int: ";
    cin >> dim;
    interi a(dim);
    a.stampa();
    cout << "Inserisci la dimensione del vettore float: ";
    cin >> dim;
    decimali b(dim);
    b.stampa();
    
    return 0;
}
