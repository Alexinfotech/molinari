#include <stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    
    FILE *fp_out;//-------------------------------------puntatore file scrittura
   // FILE *fp_in;//--------------------------------------puntatore file lettura
    int dato;//-----------------------------------puntatore numeri aggiunti al file con fopen puntatore FP_out
   //tringstream change;//------------------------------cambio TIPO char int
    int i;
     
  
    fp_out = NULL;//------------------------------------dichiaro null puntatore file flusso in uscita 
    int** v;//-------------------------------------------puntatore dimensione
    
     v = NULL;
    //fp_in=NULL;//---------------------------------------dichiaro null puntatore file flusso in entrata 
    srand(time(NULL));
    int dim = rand()%10 + 10;
    
    fp_out=fopen("ARRAY.txt","w");//-------------------------apertura fluss area file per scrittura uso puntatore flusso in uscita
     v=new int*;
     *v=new int[dim];
     
   
    for(int i = 0; i < dim; i++){**(v+i) = rand()%100;}
    fprintf(fp_out,"indir partenza--array-%p\n",*(v));
    fprintf(fp_out,"indir partenza--heap-%p\n\n",&*(v)); 
    for(int i=0;i< dim;i++){fprintf(fp_out,"dato\n%d\n",*(v+i)),fprintf(fp_out,"indir--area-memoria-array-%p\n",*(v+i)),fprintf(fp_out,"indir--*v-heap-%p\n",&*(v+i));} 
    fprintf(fp_out,"indir partenza--array-%p\n",**(v));
    fprintf(fp_out,"indir partenza--heap-%p\n\n",&**(v)); 
    for(int i=0;i< dim;i++){fprintf(fp_out,"dato\n%d\n",**(v+i)),fprintf(fp_out,"indir--area-memoria-array-%p\n",**(v+i)),fprintf(fp_out,"indir--*v-heap-%p\n",&**(v+i));}  
   
    fclose(fp_out);

    return 0;

}