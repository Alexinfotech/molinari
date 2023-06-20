#include "vettore.h"

void carica(int* p, int dim)
{
    p=new int [dim];
    
    for(int i=0; i<dim; i++)
    {
        *(p+i)=i;
    }
   
}

void stampa(int* p, int dim)
{
    for(int i=0; i<dim; i++)
    {
        cout<<(*p+1)<<endl;    
    }
}