#include"vettore.h"

vettore::vettore(){
int dim;
int* v;
int i;
}
vettore::vettore( int dim){   
        dim; 
        
}
 
    void vettore::insDim(int dim){
       this->dim=dim;
    }
     int vettore::getDim(){
                  return dim;
        
    }
    void vettore::carica(){
          srand(time(NULL));
               v=new int [dim];
                for(int i=0; i<dim; i++){
    *(v+i)=rand()%100;
                }
    }

void vettore::stampa(){
    for(int i = 0; i < dim ; i++){
            cout<<"in posizione "<<i<<" si trova "<<*(v+i)<<endl;
    }
   
} 


