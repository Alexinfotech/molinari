/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include "pilaStk.h"



int main()
{   
    pilaStk f;
    int dim, scelta, num;
    cout<<"Inserisci la dimensione dello stack: ";
    cin>>dim;
    
   f.insDim(dim);
    
    do {
        cout<<endl<<"1)Push"<<endl<<"2)Pop"<<endl<<"3)Visualizza"<<endl<<"4)Esci"<<endl;
        cin>>scelta;
        
        switch(scelta) {
            case 1:
                cout<<"Che numero vuoi inserire nello stack?"<<endl;
                cin>>num;
                f.push(num,dim);
                break;
            case 2:
                f.pop();
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
