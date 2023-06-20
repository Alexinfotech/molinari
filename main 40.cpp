/*in questo esercizio, creo un vettore dinamico,
Un costruttore di copia che crea una copia del vettore, 
Viene chiesto all'operatore di  dare una dimensione al vettore, che viene inizializzato a -1,
Viene creata una copia del vettore
L'operatore può  inserire dei valori nel vettore che andranno a modificare la copia del vettore, 
lasciando il vettore l'originale intatto, inizializzato a -1. Se si elimina la copia del costruttore 
le modifiche saranno speculari per i due vettori.*/


#include <iostream>
using namespace std;
class Vettore {//classe chiamata Vettore
    public:
        
        int *V;//Un puntatore a un array di interi per memorizzare gli elementi del vettore
        int dim;//la dimensione del vettore
        Vettore(int dim)  {
            this->dim=dim;// il membro dim viene impostato sul valore di dim passato come argomento al costruttore.
            V = new int[dim];
            for (int i = 0; i < dim; i++) {
                *(V+i)= -1;// Inizializzare tutti gli elementi dell'array con -1
            }
        }
       /* Vettore(const Vettore &oggetto ) {//costruttore di copia che crea una copia di un oggetto `Vettore` 
            this->dim=oggetto.dim;// imposta la variabile dim dell'oggetto corrente sul valore di dim dell'oggetto oggetto
            V = new int[dim];
            for (int i = 0; i < dim; i++) {
                *(V+i)= *(oggetto.V+i);// Copio gli elementi dell'oggetto `Vettrore` esistente nel nuovo array
            }
        }*/
        void stampa(){
            for (int i = 0; i < dim; i++) {
                cout<<*(V+i)<<" ";
            }
cout<<endl;
        }
};

int main() {
    cout<<"Inserisci dimensione: ";
    int dim;
    cin >> dim;
    
    Vettore originale(dim);//creo un oggetto chiamato originale della classe Vettore
    Vettore copia(originale);//creo un oggetto copia della classse Vettore utlilizzando il costruttore di copia che passa l'riginale come argomento
    for (int i = 0; i < dim; i++) {// Chiedo all'utente di inserire i valori che andranno a modificare la copia del vettore
        cout<<"Inserisci valore -> ";
        cin >> *(copia.V+i);
    }
    // Stampa il vettore originale
    cout<<"Vettore originale:"<<endl;
    originale.stampa();
    // Stampa il vettore copia
    cout<<"Vettore copia :"<<endl;
    copia.stampa();
  return 0;
}

