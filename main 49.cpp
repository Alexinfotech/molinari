/******************************************************************************
dichiaro int a;
do valore 5 a int a;
stampa  valore e inidrizzo variabile di int a
stampa indirizzo area puntatore mypointr e indirizzo puntnato non inizializzato
stampa indirizzo area puntatore mypointr e indirizzo puntnato dichiarato new senza dichiararlo prima Null 
quindi senza azzeramento indirizzo area puntatore e indirizzo puntato
passaggio indirizzo della variabile int a; al puntatore mypointr e stampa nuovo indirizzo puntatore
e relativo valore di quell'area di memoria
dichiaro int b;
passo il valore puntato dal puntatore mypointr a int b; e stampo in valore acquisiti da int b;



*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{   cout<<"variabile di tipo intero int a=5;\n";
    int a=5;
    
    cout<<" ("<<&a<<") &a <--stampa indirizzo variabile int a"<<endl;//stampa indirizzo a
    cout<<" ("<<a<<")  <--stampa valore int a"<<endl<<endl;//stampa valore a
    
    cout<<" *myponter\n";
    int* mypointer;
    cout<<" ("<<&mypointer<<") <-- indirizzo dell'area di memoria del punatore che al suo interno ha l'indirizzo puntato"<<endl;
    cout<<" ("<<*mypointer<<") <--valore non inizializzato"<<endl;
    cout<<" ("<<mypointer<<") <-- indirizzo puntato"<<endl<<endl;
    
    cout<<"new  myponter non dichiarato null\n";
    mypointer=new int;
    cout<<" ("<<&mypointer<<") <-- indirizzo dell'area di memoria del punatore che al suo interno ha l'indirizzo puntato"<<endl;
    cout<<" ("<<*mypointer<<") <--valore inizializzato"<<endl;
    cout<<" ("<<mypointer<<") <-- indirizzo puntato "<<endl<<endl;
    
    cout<<"puntatore myponter con passaggio indirizzo\n";
    mypointer = &a;
    cout<<" ("<<&mypointer<<") <--indirizzo dell'area di memoria del punatore che al suo interno ha l'indirizzo puntato"<<endl;
    cout<<" ("<<*mypointer<<") <--- quindi *mypointer punta  al valore int a"<<endl;
    cout<<" ("<<mypointer<<") <-- nuovo indirizzo puntato da *mypointer acquisito da int a"<<endl<<endl;
    
    cout<<" int b = *mypointer ||  passo valore puntato da mypointer a  int b\n";
    int b;
    
    b = *mypointer;
    cout<<" ("<<b<< ")<-- stampo valore puntato da my pointer passato a b\n\n";
    
    cout<<"dichiaro mypointer dichiarato NULL puntatore non valido \n";
    mypointer=NULL;
    cout<<" ("<<mypointer<<")-"<<endl;
    cout<<" ("<<*mypointer<<")--"<<endl;
    cout<<" ("<<&mypointer<<")----"<<endl<<endl;

    return 0;
}
