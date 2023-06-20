/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "lib.h"

using namespace std;

int main()
{   
    int dim, scelta, num;
    cout<<"Inserisci la dimensione dello stack: ";
    cin>>dim;
    
    pila obj(dim);
    
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
                cout<<obj.pop();
                break;
            case 3:
                obj.visualizza();
                break;
            case 4:
                break;
            default:
                cout<<"Hai fatto un inserimento sbagliato."<<endl;
        }
    }while(scelta != 4);
    
    return 0;
}
