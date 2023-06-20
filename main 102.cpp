/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;


template <class T>//usa class T template come classe di tipo generico, passo 3 vettori di diverso tipo
void  vettore( T& vettore, size_t size) {//passo vetore per riferimento a class T
    for (int i = 0; i < size; i++) {//size_t do dimensione for da main per ogni vettore di tipo diverso
        cout << vettore[i] << " ";
    }
}

int main() {//uso funzione const = valore contenuto vettore constante 
    const int v[4] = {1, 2, 3, 4};//vettore interi
    vettore(v,4); //Chiamo la funzione template  passando l'array e la sua dimensione come parametri
    cout<<endl;
    const float v1[6] = {1.1, 2.2, 3.3, 4.4, 5.5,6.6};//vettore float
    vettore(v1,6);//Chiamo la funzione template  passando l'array e la sua dimensione come parametri
    cout<<endl;
    const string v2[10] = {"ciao belli"};//vettore stringa, cioè char di caratteri
    vettore(v2,10);//Chiamo la funzione template  passando l'array e la sua dimensione come parametri
    return 0;
}
