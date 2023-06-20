
#include "vettore.h"
void menu();

int main()
{
  vettore f;
         cout<<"inserisci dim: ";
  int dim;  
         cin>>dim;  
  f.insDim(dim); 
    
  f.carica();
  f.stampa();
  //(v==NULL);//

    return 0;
}
