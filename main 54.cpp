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
        int* vettore;
public:
        interi(int dim) : dim(dim) {
            vettore = new int[dim];
            for(int i=0; i < dim; i++) {
                vettore[i] = 1;
            }
        }
      
        void stampa() {
            for(int i=0; i < dim; i++) {
                cout << vettore[i] << endl;
            }
        }
};

class decimali:public interi {
private:
        float dim;
        float* vettore;
public:
        decimali(int dim):interi(dim),dim(dim) {
            vettore = new float[dim];
            for(int i=0; i < dim; i++) {
                vettore[i] = 0.1;
            }
        }
       
        void stampa() {
            interi::stampa();
            for(int i = 0; i < dim; i++) {
                cout << vettore[i] << endl;
            }
        }
};

int main() {
    int dim;
    cout << "Inserisci la dimensione per il vettore interi: ";
    cin >> dim;
    interi a(dim);
    a.stampa();
    cout << "Inserisci la dimensione per il vettore decimali: ";
    cin >> dim;
    decimali b(dim);
    b.stampa();
    
    return 0;
}

