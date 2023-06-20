/******************************************************************************

LEGGRE DA TASTIERA UN ELENCO DI NOMI DI PERSONE,
E STAMPARE:
IL NOME PIù LNGO
IL NOME CHE COMPARE PER PRIMO NELL'ORDINE ALABETICO

*******************************************************************************/
/*

char nome1[100], char nome2[100],
STRINGA
nome1--->"fulvi0"
nome3--->"giuseppe"
nome3--->"andrea"
gets

'F' 'u' 'l' 'v' 'i' 'o'
'G' 'i' 'u' 's' 'e' 'p' 'p' 'e'





char nome[3][9];
MATRICE CARATTERE
VETTORE DI STRINGA

char nomi[NUMERO_MAX_NOMI][LUNGHEZZA_MAX_NOME+1];

nomi[i][j] : singolo carattere (char)
(j+1)-esimo carattere dll'(i+1)-esimo nome

nomi[i] : puntatore alla riga (i+1)-esima
          puntatore ad un vettore di caretteri
          puntatori ad una stringa 
          gets(nome[i]) ;
          gets(nomi[i][0]);no
          gets(nomi);no*/
          
          
#include "VETstringhe.h"
int main()
{
    char nomi [MAXNOMI] [LUNNOME+1] ;
    char s[LUNNOME+1];
    char maxlun;
    char posmax;
    
    int N=0;//quanti momi sono presenti nel vettore nomi
    int i;
    
do{
        printf("inserisci un nome(invio per termniare): ");
        gets(s);
        
       /* if(strlen(s)==0)
        if(strcmp(s, "")==0)
        if(s[0]=0)*/
        
        if(strlen(s)>0)//se maggiore di 0 copierò s
        {
            strcpy(nomi[N], s);
            N++ ;
        }
    } 
    while ((strlen(s)>0) && N<MAXNOMI ); //rifaccio nel while 
    
printf("\nLista nomi inseriti\n"); 
    
    //stampa
    for(i=0; i<N; i++)
    {
        printf("Nome %d: %s\n", i+1, nomi[i]);
    }
//stampa il nome più òungo    
    maxlun = 0;
        for(i=0; i<N; i++)
        {
            if(strlen(nomi[i]) > maxlun)
            {
                maxlun = strlen(nomi[i]);
             posmax = i;
            }

        }
//primo nome alfabeticamente    
    if(N>0)
    {
        printf("\nIL Nome  più lungo è :-----> %s\n",
         nomi[posmax]);
    }
    
    strcpy(s,nomi[0]);//stricpy str-i-cpignora la differenza tra maiuscolo e minuscolo
        for(i=1; i<N; i++)
        {
            if( strcmp(nomi[i], s) < 0)//stricpy str-i-cmp ignora la differenza tra maiuscolo e minuscolo
            {
            strcpy(s, nomi[i]);
            }
        }
        
   /* posminalfa = 0;
    for(i=1; i<N; i++)
    {
        if(strcmp(nomi[i], nomi[posminalfa]) < 0)
        posminalfa = i; // stesso procedimento di sopra ma non fa una copia
        //del nome minore alfabeticamente, ma mette un segno al vettore nella posizione 
        // in ccui si trova il nome minore alfabeticamente
    }
    strcpy(s, nomi[posminalfa]);// così scrivendo copia solo alla fine il nime minore alfabeticamente
     */
    if(N>0)
    {
        printf("\nIL Nome  più alfabeticamente minore è :-----> %s\n",
         s);
    }

    return 0;
}







































