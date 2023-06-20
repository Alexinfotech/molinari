#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
class verifica{
    
public:

    verifica();
    verifica(float media);
    void ins_dim(int dim); 
    void ins_media(int dim);
    

private:
    
    int dim;
    int i;
    int* v;
    FILE *fp;
    float somma_dispari;
    int cont_cella;
    float media;
    
   
   
    
    
};