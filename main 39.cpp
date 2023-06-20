#include <iostream>
using namespace std;
class vettore {
public:
vettore() {//costruttore senza parametri, unico scopo puntare a NULL il puntatore
    V = NULL;
    dim = 0;
    
    }
void ins_dim(int dim) {// metodo per inserire la dimnsione con parametro int dim
    this->dim = dim;
    V = new int[dim];
    for (int i = 0; i < dim; i++) {
        *(V+i) = -1;
    }
}
void visualizza() {// metodo vuìislualizza
if ((V != NULL) || (dim > 0)) {
// controllo dimensione, se non inserita , la else obbliga ad inserire la dimensione
    for (int i = 0; i < dim; i++) {
        cout << *(V+i) << endl;
    }
} else {
    V = new int[dim];
    cout << "Non hai inserito la dimensione del vettore" << endl;
    cin>>dim;
for (int i = 0; i > dim; i++) {
    *(V+i) = -1;
    } 
for (int i = 0; i < dim; i++) {
        cout << *(V+i) << endl;
    }
}

}
private:
    int dim;
    int* V;
};
int main() {
   
    vettore v;
    v.visualizza();

    // should print "Non hai inserito la dimensione del vettore"
    /*v.ins_dim();
    v.visualizza(); // should print "0 0 0 0 0"*/
    return 0;
}


