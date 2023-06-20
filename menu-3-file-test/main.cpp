/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

    int scelta;
    do{
    cout<<"-----INTERFACCIA AMENU'---------"<<endl;
    cout<<"1) funzionalità uno"<<endl;
    cout<<"2) funzionalità due"<<endl;
    cout<<"3) Esci"<<endl;
    
    cout<<"iserisci una scelta[1-4]:";
    cin>>scelta;
    switch(scelta){
        case 1:
       
        break;
        case 2:
       
        break;
        case 3:
        return 0;
        
        break;
        default:
       cout<<"Hai fatto un inserimento sbagliato."<<endl;
    }
}while(scelta!=4);

return 0;


}
