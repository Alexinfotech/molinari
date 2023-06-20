/******************************************************************************


QUADRATO MAGICO
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    int q[MAX] [MAX];
    int N;//lato quadrato
    int i,j,i1,j1;
    int sommabase;
    int somma;
    int magico;//flag
    int valido; // flag numeri validi
  
    printf("Qual'è il lato del quadrato?\n");
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
    
    printf("\n Quadrato inserito:\n\n");
    for(i=0; i<N; i++)
    {
       for(j=0; j<N; j++)
        { 
            printf( "%4d",q[i][j]);
        }
printf("\n");
    }
    
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
    
    sommabase = 0;
    for(j=0; j<N; j++)
     
    sommabase=sommabase + q[0] [j];
    magico = 1;
    
   //la somma della riga i è uguale a sommabase  
    for(i=0; i<N; i++)
    {
         somma = 0;
          for(j=0; j<N; j++)
               somma=somma + q[i] [j];
               if(somma != sommabase)
               magico = 0;
    }
//somma delle colonne
            
    for(j=0; j<N; j++)
    {
        somma = 0;
         for(i=0; i<N; i++)
               somma=somma + q[j] [i];
               if(somma != sommabase)
               magico = 0;
    }
    
//diagonale discendente
    
    somma = 0;
    for(i=0; i<N; i++)
        somma = somma + q[i] [i];
        
        if(somma != sommabase)
               magico = 0;
               
    
//diagonale ascendente

    somma = 0;
    for(j=0; j<N; j++)
        somma = somma + q[N-1-j] [j];
        if(somma != sommabase)
               magico = 0;
    
    
   if(magico==1)
   {
       printf("Complimenti il quadrato è magico\n");
   }
   else
   {
       printf("Il quadrato non è magico, ritenta\n");
   }
   
  
    

   return 0;
}