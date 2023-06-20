#include "conto_corrente.h"

Conto::Conto(double saldo) : saldo(saldo) {}

double Conto::Saldo_attuale()  {
    return saldo;
}

void Conto::setSaldo(double saldo) {
    this->saldo = saldo;
}

Operazioni::Operazioni(double saldo) : Conto(saldo) {}

void Operazioni::prelievo(double importo) {
    setSaldo(Saldo_attuale() - importo);
}

void Operazioni::versamento(double importo) {
    setSaldo(Saldo_attuale() + importo);
}

