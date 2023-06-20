
#include <iostream>
using namespace std;
int main()
{
 int *ptr1;
 ptr1 = 0; //indica che ptr1 non punta a nulla
 if (ptr1 == 0)
 cout << "Il puntatore non e' inizializzato"<<endl;
 int conta = 7;
 int *contaInd;
 contaInd=&conta; //assegna a contaInd l'indirizzo della variabile intera conta
 cout<<"valore della variabile conta: "<<conta<< endl;
 cout<<"indirizzo di conta: "<<contaInd<< endl;
 cout<<"valore della variabile conta ottenuto mediante il suo indirizzo: "<<*contaInd;
 return 0;
} 