/******************************************************************************
esercizio eccezzione
sollevo eccezione
metto sotto osservazione il blocco di codice
intercetto eccezzione
gestisco eccezione con ciclo while

*******************************************************************************/
#include <iostream>
using namespace std;
class Frazione {
public:
    Frazione(int num, int den);//costruttore 
    void fra();//metodo void
private:
    int num;
    int den;
    int r;
};
Frazione::Frazione(int num, int den)://costruttore
num(num),den(den){}//inizializzo i membri  passati come argomenti al costruttore.
//vengono inizializzati con i valori dei parametri 
void Frazione::fra() {
    if (den == 0) {
        throw"stai cercando si dividere per zero";//throw sollevo eccezione
        }
    int r = num / den;
    cout << r << endl;
}
int main() {
     int num, den;
    cout << "Inserisci numeratore: ";
    cin >> num;
while (true) {//ciclo while, vero
        cout << "Inserisci denominatore: ";
        cin >> den;
        Frazione a(num, den);//creo oggetto frazione di nome a che richiama 2 argomenti num den 
try {//try metto sotto ossevazione il codice
            a.fra();
            break;//quando il dem non e zero esce dal while
        } catch (const char* messaggio) {//catch intercetta eccezzione
            cout << messaggio << endl;
        }
    }


    return 0;
}


