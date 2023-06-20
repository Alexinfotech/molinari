
#include "vettore.h"
void menu();

int main()
{
  vettore f;
         cout<<"Quanti elementi hai bisogno?: " ;
  int dim;  
         cin>>dim;  
  f.insDim(dim); 
    
  f.carica();
  f.stampa();
  f.somma();
  f.med();
  f.MAX_MIN();
  f.POS_MAX();
  f.POS_MIN();

return 0;
}
