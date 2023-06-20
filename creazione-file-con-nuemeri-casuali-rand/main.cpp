
#include<iostream>
#include<stdlib.h>
#include <ctime>
//#include "stack.h"
using namespace std;

 int main(){
     int *v;//puntatore dimensione
     FILE *fp_out;//puntatore file scrittura
     int dato[255];
       
     int i;  
     fp_out = NULL;//dichiaro null puntatore file
      v = NULL;
     srand(time(NULL));
     int dim = rand()%50 + 10;
     
    /* fp=fopen("stack.h","w");//stampa file stack.h prototipo stack
     fprintf(fp,"typedef struct nodo\n");
     fprintf(fp,"{\nint data;\nstruct nodo* next;\n} branch;\n\n");
     fprintf(fp,"typedef branch* lista;\n\nvoid push(lista& testa, int num);\n");
     fprintf(fp,"void pop(lista& testa, lista& temp);\nvoid print_list(lista& testa, lista& temp);");
     fclose(fp);*/
     
    fp_out=fopen("flussoIN.txt","w");//stampa file.txt che usero come flusso estrno dati per lista
    v = new int[dim];//dichiarazione puntatore dimensione
        for(int i = 0; i < dim; i++){*(v + i) = rand()%100;}
        for(i=0;i < dim;i++){cout << " " << *(v+i);//stampa a monitor risultato arrey
    fprintf(fp_out,"%d ",*(v+i)); }//stampa nel file il risultato del puntatore+indice ciclo for rand
    
    fclose(fp_out);
    return 0;
}
