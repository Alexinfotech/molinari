



/*questo programma ti mette ha disposizione un raccogliore dati con tre differenti simulazioni 

effetto stack dove avrai l'ultimo dato inserico come primo disponibile all'esstazione
effetto coda dove avrai il primo dato inserito ad essere il primo dato disponibile all'estrazione utile per 
effetto ordinamento, inserisci i dati in modo casuale, il prcesso di creazione lista sara riordinato in modod cresscnte
    return 0;*/


#include <iostream>

#include "lista.h"
using namespace std;

int main()
{   
    int num, scelta; /*
    cout<<"Inserisci la dimensione dello stack: ";
    cin>>dim;*/
    
    lista obj(lista& testa, int num);
    
    do {
        cout<<endl<<"1)Push"<<endl<<"2)Pop"<<endl<<"3)Visualizza"<<endl<<"4)Esci"<<endl;
        cin>>scelta;
        
        switch(scelta) {
            case 1:
                cout<<"Che numero vuoi inserire nello stack?"<<endl;
                cin>>num;
                obj.push(num);
                break;
            case 2:
                
                break;
            case 3:
                obj.stampa();
                break;
            case 4:
                break;
            default:
                cout<<"Hai fatto un inserimento sbagliato."<<endl;
        }
    }while(scelta != 4);
    
    return 0;
}
