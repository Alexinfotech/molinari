#include <iostream>
#include "persona.h"
using namespace std;
persona::persona()
{
    nome = "";
    cognome = "";
    stipendio = 0;
}
void persona::stampa()
{
    cout << "nome: " << nome << "\ncognome: " << cognome << "\nstipendio: " << stipendio << endl; 
}