#include <iostream>
using namespace std;

class Conto {
public:
    Conto(double saldo);
    double Saldo_attuale();
    void setSaldo(double saldo);
private:
    double saldo;
};

class Operazioni : public Conto {
public:
    Operazioni(double saldo);
    void prelievo(double importo);
    void versamento(double importo);
};


