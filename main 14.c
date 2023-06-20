/******************************************************************************


in c non essendo fatto di 2 blocchi non si può chiedere la dimensione 
dall'utentr in quanto prima devo dichiarer la variabile e poi le istruzioni eseguibili
esempio
int N;
int vett[N];
scanf("%d", &N)
in ci non si può
*******************************************************************************/
//LEGGI DA TASTIERA LA PIOVOSITA DEI MESI
#include <stdio.h>
#include <stdlib.h>


#define MESI 12 //costante
int main()
{
    //int mm[12];//contiene la piovosità dei 12 mesi v0= gen mese v1=feb etc
    int mm[MESI];//costante
    int i;
    int x;
    int mmMAX;
    int mmMIN;
    int somma;
    int posmax;
    int posmin;

        printf("inseriscii mm di pioggia dei 12 mesi\n");

            for( i=0; i<MESI; i++)
            {
               printf("inseriscii mm di pioggia del mese %2d: ", i+1);
                /*scanf("%d", & x);
                mm[i] = x;  */   //memorizza la variabile (x) in (i)  per non sovrascrivere ie perdere il dato  in (x)       
                scanf("%d", & mm[i]);
            }
            
            for( i=0; i<MESI; i++)
                {
                printf("%2d) Mese %d mm di pioggia \n", i+1, mm[i]);
                
                }
        printf("\n");
                
        //calcola il mese piu piovoso//confrontiamo i mesi
        
                mmMAX = mm[0];
                posmax = 99999 ;//per evitare errori
            for( i=0; i<MESI; i++)  
            {
                if( mm[i] > mmMAX ){
                  mmMAX = mm[i];
                  posmax = i;//fotografa il valore nassimo
                }
                
            }
                printf("la massima precipitazione è stata di %d mm  ", mmMAX);
                
                /*for( i=0; i<MESI; i++) 
                if(mm[i] == mmMAX)*///con posmax evito un ulteriore ciclo for
                //i = mesi; o break; per far uscire prematuramente senza finire il for
                    
                    if(posmax==99999)
                    {
                        printf("ERRORE nel programma, prenditela con il programmatore:-)");
                    }
                        else
                        {
                            printf("nel mese (%d) \n ", posmax+1);
                        }
                        
        printf("\n");
                        
                           mmMIN = mm[0];
                posmin = 0 ;//per evitare errori
            for( i=0; i<MESI; i++)  
            {
                if( mm[i] < mmMIN ){
                  mmMIN = mm[i];
                  posmin = i;//fotografa il valore nassimo
                }
                
            }
                printf("la minima precipitazione è stata di %d mm  ", mmMIN);
           
                printf("nel mese (%d) \n ", posmin+1);
                        
        printf("\n");        
                
           
        //calcola la piovosita totale
        
                somma = 0;
            for( i=0; i<MESI; i++)
                 somma = somma +mm[i];
                {
                printf("\nla piovosità totale dell'anno è pari a %d mm \n", somma);
                printf("nella tabella sottostante è riportato con l'asterico il mese con più piovosità \n");
                }
                
                //riepilogo nella listainserisci asterisco affinco al mese con più piovosità
                for( i=0; i<MESI; i++)
                {
                printf(" Mese %2d: %d mm ", i+1, mm[i]);
                
                if(i==posmax)
                    printf(" *");

                    if(i==mmMAX)
                     printf(" *");
                    
        printf("\n");
                }
                
                        somma = 0;
            for( i=0; i<MESI; i++)
                 somma = somma +mm[i];
                {
               
                printf("nella tabella sottostante è riportato con l'asterico il mese con meno piovosità \n");
                }
                
                //riepilogo nella listainserisci asterisco affinco al mese con più piovosità
                for( i=0; i<MESI; i++)
                {
                printf(" Mese %2d: %d mm ", i, mm[i]);
                
                if(i==posmin)
                    printf(" *");

                    if(i==mmMIN)
                     printf(" *");
                    
        printf("\n");
                }

    return 0;
}
