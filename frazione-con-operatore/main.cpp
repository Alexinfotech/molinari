#include <iostream>
#include "frazione.h"
using namespace std;

int main(){                            
    frazione f1(10,5);
    cout << "\aprima frazione inserita";
    f1.stampa();
    frazione f2(2,3); 
    cout << "\nseconda frazione inserita";
    f2.stampa();
    frazione ris = f1+f2; 
    ris.stampa();                                        
    ris = f1-f2;
    ris.stampa();
    ris = f1*f2;
    ris.stampa();
    ris = f1/f2;
    ris.stampa();
    return 0;
}
  
    
    
    

