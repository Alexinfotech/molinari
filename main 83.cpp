/*Obiettivo didattico:
Utilizzo della funzione malloc per la gestione dinamica della memoria
Obiettivo del programma:
 Caricare nella memoria dinamica un numero n di interi a tempo di esecuzione
#include <iostream>*/
#include <stdlib.h> /* malloc, free, rand */
using namespace std;
int main()
 {
 int n, num;
 cou<< "Quanti sono gli interi da caricare?" <<endl;
 ci>> n;
 //Allocazione dinamica di un blocco di memoria pari a n int
 int* v = (int*) malloc(sizeof(int)*n);
 if (v==NULL) exit(1); //Allocazione non andata a buon fine!
 for(int i=0; i<n; i++)
 {
 cout<<"Inserisci l'intero n. "<<i+1<<": ";
 cin>>v[i];
 }
 cout<<"Sono stati memorizzati i seguenti "<<n<<" interi:";
 for(int i=0; i<n; i++) cout<<" " << v[i];
 cout<<endl;
 //Dealloca l'intero blocco di memoria puntato da v
 free(v);
 return 0;
}
/*In C++ un blocco di memoria dell’heap può essere riallocato modificandone la dimensione
utilizzando la seguente funzione di libreria: void* realloc (void* ptr, size_t numero_bytes);*/ 