/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "tipCoda.h"



int main()
{   
    tipCoda f;
    int dim, scelta, num;
    cout<<"Inserisci la dimensione massima della coda: ";
    cin>>dim;
    
   f.insDim(dim);
    
    do {
        cout<<endl<<"1)inserisci numero"<<endl<<"2)estrai il numero della coda"<<endl<<"3)Visualizza"<<endl<<"4)Esci"<<endl;
        cin>>scelta;
        
        switch(scelta) {
            case 1:
                cout<<"Con quale numero vuoi entrare in coda?"<<endl;
                cin>>num;
                f.insnum(num,dim);
                break;
            case 2:
                f.estrnum(dim);
                break;
            case 3:
                f.visualizza();
                break;
            case 4:
                break;
            default:
                cout<<"Hai fatto un inserimento sbagliato."<<endl;
        }
    }while(scelta != 4);
    
    return 0;
}
