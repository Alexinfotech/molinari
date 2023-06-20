/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include "vettore.h"

int main()
{
    
    int d;
    int* v;
    
    cout<<"inserisci dim";
    cin>>d;
    
    v=new int[d];
    
    carica(v, d);
    stampa(v, d);
    
    delete []v;
    
    return 0;
}