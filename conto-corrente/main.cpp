#include "conto_corrente.h"

int main() {
    double saldo;
    cout<<"inserisci saldo iniziale -> ";
    cin>>saldo;
    Operazioni conto(saldo);
    double importo;
    
    int scelta;
    do {
        cout << "Saldo attuale: " << conto.Saldo_attuale() << endl;
        cout << "1. Prelievo" << endl;
        cout << "2. Versamento" << endl;
        cout << "3. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;
        switch (scelta) {
            case 1:
                cout << "Importo del prelievo -> ";
                cin >> importo;
                conto.prelievo(importo);
                break;
            case 2:
                cout << "Importo del versamento -> ";
                cin >> importo;
                conto.versamento(importo);
                break;
            case 3:
                cout << "Arrivederci!" << endl;
                break;
            default:
                cout << "Scelta non valida." << endl;
        }
    } while (scelta != 3);
    return 0;
}
