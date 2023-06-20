#include <iostream>
#include <ctime>
#include "stack.h"

using namespace std;

int main()
{
    int* v;
    lista testaPari = NULL; 
    lista testaDispari = NULL;
    lista tempPari = NULL;
    lista tempDispari = NULL;
    int numero, condizione;
    int contaPari = 0;
    int contaDispari = 0;
    srand(time(NULL));
    int dim = rand()%50 + 10;
    
    v = new int[dim];
    cout<<"\nLa dimensione del vettore e': "<<dim;
    
    for(int i = 0; i < dim; i++)
        {
            *(v + i) = rand()%100;
        }
    
    cout<<endl<<"Il vettore contiene: ";
    for(int i = 0; i < dim; i++)
        {
            cout<<*(v + i)<<" ";
        }
    
    for(int i = 0; i < dim; i++)
        {
            if(*(v + i)%2 == 0)
                {
                    push(testaPari,*(v + i));
                    contaPari++;
                }
            else
                {
                    push(testaDispari, *(v + i));
                    contaDispari++;
                }
        }
    
    cout<<"\n\nLa lista che contiene i numeri pari: ";
    print_list(testaPari, tempPari);
    
    cout<<"\n\nLa lista che contiene i numeri dispari: ";
    print_list(testaDispari, tempPari);
    

    return 0;
}