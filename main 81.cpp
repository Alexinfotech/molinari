#include <iostream>
using namespace std;
int main()
{
 int i = 10, *p1, *p2;
 p1 = &i;
 cout << "valore contenuto all'indirizzo p1 della memoria di lavoro: "<<*p1 << endl;
 p2 = new int; //creazione di uno spazio della memoria heap di tipo int
 *p2 = *p1;
 cout <<"valore contenuto all'indirizzo p2 della memoria heap:"<<*p2 << endl;
 *p1 = 5;
 cout << "valore dello spazio di memoria puntato da p1: "<< *p1 <<endl;
 cout << "valore dello spazio di memoria puntato da p2: " << *p2 << endl;
 return 0;
} 