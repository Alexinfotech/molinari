
#include <stdio.h>
#include <stdlib.h>
#define MAX 100//numero max che l'utente può inserire

int main(){
float v [100];
int i,j;
char z;
i = 0; 
int N;
int n_pos,n_neg,trovato_maggiore;
int adiacenti_duplicati,duplicati,num,compare;


printf("Controllo inserito tra -3000 a 3000\n");
//continua fino a quando i numeri inseriti sono diversi da 
//zero o quando ha raggiunto il valore max di inserimento
  while(( i==0 || v[i-1] != 0 )  && i<MAX) 
  {
    printf("Inserisci un numero");
    scanf("%f" ,&v[i]);
    if(v[i]>-3000 && v[i]<3000){//controllo consiciafo da Alemanno
    
    

    i++;//-----------------incremento la vatiabile i
  }
    else
        {
            printf("Hai inserito un numero non consentito dal controllo\n");
        }
}

  if(i==MAX)
  {
      printf("Hai inserito la capienza massima");
  }
  
  N = i-1;// a differenza di i++ che conta anche l'inserimento di 0
  printf("L'utente ha inserito %d numeri\n\n", N);
  printf("TABELLA DEI NUMERI INSERITI\n");
 
  
//STAMPA DI VERIFICA
  for(i=0; i<N; i++)
    printf("Cella [%d]= %f\n",i, v[i]);// stampa il numero inserito e la relativa cella

   
//CONTA QUANTI NUMERI SONOI POSITIVI E QUANTI NEGATIVI
    n_pos = 0;
    n_neg = 0;
    for(i=0; i<N; i++)
    {
        if(v[i]>0)
        {
            n_pos++;
        }
        else
        { 
            n_neg++;
        }
    }
    printf("\n");
    printf("Ci sono <%d> valori positivi e <%d> valori negativi\n",
    n_pos,n_neg);
printf("\n");


//DETERMINA SE UN VALORE  è > di 10000
   trovato_maggiore = 0;
    for(i=0; i<N; i++)
    {
        if(v[i]>1000)
        {
            printf("Esiste un valore maggiore di 1000\n");
            //trovato_maggiore++;
            trovato_maggiore = 1;
            break;
        }
        
    }
//la variabile trovata maggiore è usata come FLAG
    if(trovato_maggiore == 0)
    printf("NON esiste un valore maggiore di 1000\n");

//DETERMONA DUPLICATI ADIACENTI
    adiacenti_duplicati = 0;
        for(i=0; i<N; i++)
            { 
            if(v[i] == v[i-1])
            adiacenti_duplicati = 1;
            }
            if(adiacenti_duplicati == 1)
            printf("Esistono elementi adeiacenti duplicati\n");
            else
            printf("NON esistono elementi adeiacenti duplicati\n");
         
//DETERMONA ELEMEMNTI DUPLICATI ANCHE NON ADIACENTI   
    duplicati = 0;
        for(i=0; i<N; i++)
        {
            num=v[i];
            compare = 0;
            for(j=0; j<N; j++)
            {
                  if(num==v[j] && j != i)
                  compare = 1;
            }
            
            
            if(compare==1)
            duplicati = 1;
        }
          if(duplicati == 1)
            printf("Esistono elementi  duplicati\n");
            else
            printf("NON esistono elementi  duplicati\n");
            
            
           /* duplicati = 0;
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                if(v[i]==v[j])
                duplicati=1;
               }
        }
         if(duplicati == 1)
            printf("Esistono elementi  duplicati\n");
            else
            printf("NON esistono elementi  duplicati\n");*/
            
      
  printf("\ntutto ok");  
 
   


    return 0;
}
