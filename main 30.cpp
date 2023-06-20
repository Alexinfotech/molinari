/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class ContoCorrente {
private:
    int numeroConto;
    double saldo;

public:
    ContoCorrente(int numero) : numeroConto(numero), saldo(0) {}

    void deposito(double importo) {
        saldo += importo;
    }

    void prelievo(double importo) {
        saldo -= importo;
    }

    void versamento(double importo) {
        saldo += importo;
    }

    double getSaldo() const {
        return saldo;
    }

    int getNumeroConto() const {
        return numeroConto;
    }
};

int main() {
    int numeroConto;
    double importo;
    char scelta;
    ContoCorrente conto(1);

    do {
        cout << "Selezionare l'operazione da eseguire:" << endl;
        cout << "1. Visualizza saldo" << endl;
        cout << "2. Esegui deposito" << endl;
        cout << "3. Esegui prelievo" << endl;
        cout << "4. Esegui versamento" << endl;
        cout << "5. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case '1':
                cout << "Saldo attuale: " << conto.getSaldo() << endl;
                break;
            case '2':
                cout << "Inserisci l'importo da depositare: ";
                cin >> importo;
                conto.deposito(importo);
                break;
            case '3':
                cout << "Inserisci l'importo da prelevare: ";
                cin >> importo;
                conto.prelievo(importo);
                break;
            case '4':
                cout << "Inserisci l'importo da versare: ";
                cin >> importo;
                conto.versamento(importo);
                break;
            case '5':
                break;
            default:
                cout << "Scelta non valida." << endl;
                break;
        }
    } while (scelta != '5');

    return 0;
}
