/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
   int i,j;
   FILE *crea;
   FILE *leggi;
   FILE *copia;
   char stringa[255];
   int n=0;
   int v[i];
   
   
   cout<<"quanti numeri vuoi inserire: ";
   cin>>n;
    
        for( i=0;i < n;i++)
        {
        cout<<"inserisci il numero: ";
        cin>>v[i];
        }
    
        for(i=0;i<n;i++)
        cout<<"-"<<v[i];
    
    
    crea=fopen("crea.txt","a");
        fprintf(crea,"CIAO questo sono i numeri del file 'creato'");
        for(i=0;i<n;i++)
        fprintf(crea,"%d ",v[i]);
    fclose(crea);
      leggi = fopen("crea.txt", "r");
      copia = fopen("copia.txt", "w");
      fprintf(copia,"NEL FILE 'CREA' HO LETTO: (");
      
    (!crea || !copia);

  while//LEGGE FILE CREA E STAMPA FILE COPIA
    (fscanf(leggi, "%s\n", stringa) > 0) 
    {
        fprintf(copia, "%s ", stringa);
    }
    fprintf(copia,")");
    if (feof(leggi)) { //STAMPA A MONITOR FINE LETTURA
        printf("SCANSIONE FILE (CREA) TERMIANTA!\n");
    }
    
    fclose(leggi);
     fclose(copia);
         return 0;
}
