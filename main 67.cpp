/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Albero {
   public:
      virtual void stampa() {
         cout << "Stampa l'albero" << endl;
      }
};

class Fiore : public Albero {
   public:
      void stampa() {
         cout << "Stampa il fiore" << endl;
      }
};

class Seme : public Albero {
   public:
      void stampa() {
         cout << "Stampa il seme" << endl;
      }
};

int main() {
   Albero alb;
   alb.stampa();
   
   Albero *a;
   Fiore f;
   Seme s;
   a = &f;
   a->stampa();
   a = &s;
   a->stampa();

   return 0;
}

/*In questo secondo blocco di codice, stiamo creando un puntatore 
alla classe Albero chiamato a, 
e poi creando oggetti della classe Fiore e Seme 
chiamati f e s rispettivamente.

Quando assegniamo &f al puntatore a, stiamo assegnando 
l'indirizzo di memoria dell'oggetto f al puntatore a. 
Successivamente, chiamiamo il metodo stampa sul puntatore a. 
Poiché a è un puntatore alla classe Albero 
e stiamo chiamando il metodo virtuale stampa, il compilatore 
utilizzerà l'implementazione del metodo stampa 
definita nella classe effettiva dell'oggetto puntato dal puntatore a. 
In questo caso, poiché a punta all'oggetto f, 
verrà chiamata l'implementazione del metodo stampa definita 
nella classe Fiore, che stamperà "Fiore".

In seguito, assegniamo &s al puntatore a, assegnando 
l'indirizzo di memoria dell'oggetto s al puntatore a. 
Successivamente, chiamiamo il metodo stampa sul puntatore a. 
Poiché a è un puntatore alla classe Albero e stiamo 
chiamando il metodo virtuale stampa, il compilatore utilizzerà 
l'implementazione del metodo stampa definita 
nella classe effettiva dell'oggetto puntato dal puntatore a. 
In questo caso, poiché a punta all'oggetto s, verrà chiamata 
l'implementazione del metodo stampa definita nella classe Seme, che stamperà "Seme".

In sintesi, questo esempio mostra come il polimorfismo in C++ 
consente di utilizzare un'interfaccia comune 
per le classi padre e figlio, in modo da poter utilizzare un oggetto 
di una classe figlio come se fosse un oggetto 
della classe padre. In questo modo, possiamo scrivere codice 
modulare ed estendibile che può essere riutilizzato 
con oggetti di diverse classi figlio, senza dover conoscere il tipo 
effettivo dell'oggetto al momento della compilazione*/