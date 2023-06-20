#include "quadrato.h"

quadrato::quadrato(){
    this->N=N;
}

void quadrato::presentazione(){
cout<<"\n\n\n\t\t\tQUADRATO MAGICO\n\n"; 
cout<<"\tINSERISCI LA DIMENSIONE DEL LATO E I NUEMRI AL SUO INTERNO\n";
cout<<"\tIL PROGRAMMA TI DIRA' SE LA SOMMA PER OGNI RIGA E UGUALE\n";
cout<<"\tVUOI GIOCARE?\n\tDIGITA 1 PER SI 2 SE VUOI USCIRE DAL PROGRAMMA\n\n";
cout<<"\t---->      ";
}
    
    
void quadrato::quadrato_ins(){
     printf("\n\nQual'è il lato del quadrato?\n");
    scanf("%d", &N);
    
    
    printf("inserisci i valori, per righe\n");
    for(int i=0; i<N; i++)
    {
        printf("==> Riga %d\n", i+1);
        for(j=0; j<N; j++)
        {
            printf("    Elemento (%d, %d) = ", i+1,j+1);
            scanf("%d",&q[i][j]);
        }
    } 
}   
void quadrato::stampa(){
        printf("\n Quadrato inserito:\n\n");
    for(i=0; i<N; i++)
    {
       for(j=0; j<N; j++)
        { 
            printf( "%4d",q[i][j]);
        }
printf("\n");
    }
}
void quadrato::controllo(){
        valido = 1;//controlla se il quadrato è valido
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(q[i][j]<1 || q[i][j]>N*N)
            valido = 0;
            
            for(i1=0; i1<N; i1++)
                for(j1=0; j1<N; j1++)
                {
                 if((q[i1][j1] == q[i1][j1]>N*N) && (i1!=i1 || j!=j1)) 
                 valido = 0;
                }
        }
    }
    if(valido == 0)
{
    printf("ERRORE, non è un quadrato valido\n");//controlla se il quadrato è valido
    exit(0);//se non è valido, esce dal programma
    
}
  
}
void quadrato::somma_base(){
     sommabase = 0;
    for(j=0; j<N; j++)
     
    sommabase=sommabase + q[0] [j];
    magico = 1;
    
    for(i=0; i<N; i++)
    {
         somma = 0;
          for(j=0; j<N; j++)
               somma=somma + q[i] [j];
               if(somma != sommabase)
               magico = 0;
    }
}
void quadrato::somma_colonna(){
 for(j=0; j<N; j++)
    {
        somma = 0;
         for(i=0; i<N; i++)
               somma=somma + q[j] [i];
               if(somma != sommabase)
               magico = 0;
    }
}
void quadrato::colonna_discendente(){
    somma = 0;
    for(i=0; i<N; i++)
        somma = somma + q[i] [i];
        
        if(somma != sommabase)
               magico = 0;
}
void quadrato::colonna_ascendente(){
    somma = 0;
    for(j=0; j<N; j++)
        somma = somma + q[N-1-j] [j];
        if(somma != sommabase)
               magico = 0;
    
}
void quadrato::controllo_finale(){
      if(magico==1)
   {
       printf("Complimenti il quadrato è magico\n");
   }
   else
   {
       printf("Il quadrato non è magico, ritenta\n");
   }
}