/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdlib.h>
#include <ctime>
//#include "stack.h"
using namespace std;

 int main(){
     int *v;//puntatore dimensione
     FILE *fp;//puntatore file scrittura
     int dato[255];
        
     int i; 
     fp = NULL;//dichiaro null puntatore file
      v = NULL;
     srand(time(NULL));
     int dim = rand()%50 + 10;
  
     fp=fopen("flussoIN.txt","w");
     
        //*(v+i)=rand()%100;};//stampa file.txt che usero come flusso estrno dati per lista

      v = new int[dim];//dichiarazione puntatore dimensione
                                     //cout<<"\nLa dimensione del vettore e': "<<dim;
      fp=fopen(fp,"%d",dato){
        *(v+i)=rand()%100;}

//for(i=0;i < dim;i++){
   // cout << " " << *(v+i)};//stampa a monitor risultato arrey
//fprintf(fp_out,"%d ",*(v+i)); }//stampa nel file il risultato del puntatore+indice ciclo for rand
   // FILE *fp_in;//puntatore file flusso lettura
    fclose(fp);
    return 0;
}
