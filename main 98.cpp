/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


template<class T>//class T generica vettore
class VETTORE{
    private:
    
        int dim;//dimensione vettore
        T* vett;//puntatore al primo elemenro del vettore
        
    public:
    
        VETTORE(int dim, T* arr ): dim(dim) {//costruttore,argomenti: dimensione, e un puntatore a un array di tipo generico
        vett=new T[dim];//dinesione
        for(int i = 0; i < dim; i++){ 
        vett[i]=arr[i]; // inizializza valori vettore
        }
        }
        void stampa();//stampa a video i valori contenuti
        
};

template<class T>
void VETTORE<T>::stampa() {//metordo stampa
    for (int i = 0; i < dim; i++) {
        cout << vett[i] << " ";
    }
    cout << endl<<endl;

}
 int main()
{
    
    int arr1[]={5,3,5,7};//passaggio valori
    VETTORE<int> a(4,arr1);//oggetto/dimensione vettore
    
    float arr2[]={12.5, 34.5, 78.2, 67, 3};
    VETTORE<float> b(5,arr2);
    
    string arr3[]={"vettore","di","stringhe"};
    VETTORE<string> c(3,arr3);
    
    cout<<"interi"<<endl;
    a.stampa();
    cout<<"float"<<endl;
    b.stampa();
    cout<<"stringhe"<<endl;
    c.stampa();

    return 0;
}
