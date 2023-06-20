/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#define LUN 30
int main()
{
    //variante: 1 vettore di caretteri con variabile intera che 
    // ne ricorda la lunghezza
    char nome[LUN];
    int lung_nome;
    char appoggio;
   
    // variante 2: (da usare sempre): vettore di caratteri
    // terminato da '0' stringa
    char nome2[LUN+1];
    char appoggio2;
    
    //versione 3: usa le funzioni libreria,ove possibile
    char nome3[LUN+1];
    
    
    
    int i;
    printf("come ti chiami? ");
    
    i=0;
    do{
        appoggio= getchar();
        if(appoggio!='\n')
        {
        nome[i] = appoggio;
        i++;
        }
        //il noe della persona è lungo 'i' lettre
        //ed è memorizzato nelle posizioni da nome[0] a nome[i-1]
        
    } 
    while(appoggio!='\n');
        lung_nome = i;
    
        printf(" CIAO ");
    for(i=0; i<lung_nome; i++){
        //printf("%c", nome[i]); uguale a sotto
        putchar(nome[i]);
    
    
    
}
printf("\n"); 


//versione nome2
    printf("come ti chiami? ");

     i=0;
    do{
        appoggio2= getchar();
        if(appoggio2!='\n')
        {
        nome2[i] = appoggio2;
        i++;
        }
        //il noe della persona è lungo 'i' lettre
        //ed è memorizzato nelle posizioni da nome[0] a nome[i-1]
        
    } 
    while(appoggio2!='\n');
    // aggiungiamo terminatore nullo
    nome2[i] =  0;
    nome2[i] = '\0';
    //nome2[i] = '0'---> NO!!!

    printf(" CIAO ");
      for(i=0; nome2[i] !='\0'; i++)
      {
         putchar(nome2[i]);
      }
putchar('\n');

//versione 3
    printf("come ti chiami? ");
    
   //legge da tastiera i caratteri, fino ad incontrare \n
   //e memorizza nella stringa nome3 (escluso\n)
   //la stringa viene correttamente terminata con \0 
   //a cura della funzione gets
   
    gets(nome3) ;
   //printf("come ti chiami? ");
    //scanf("%s",nome3);//non legge lo spazio
  
//stampa il contenuto della stringa fino al \0
    printf(" CIAO ");
        puts(nome3);
        
    // printf(" CIAO %s\n",nome3);   
     printf("Il tuo nome è lungho %ld caratteri\n",
     strlen(nome3));
     
//verefichiamo se il nome1 è uguale a nome2

   /* if(nome3 == nome3)
    {
        printf("ok hai un buona memoria\n");
    }
    else
    { 
        printf("sei un pò confuso.....\n");}*///confronta numeri interi e non caratteri
        
        if(strcmp(nome2, nome3)==0)
        {//== 0 vuol dire che nome 2 è uguale a nome3
         //< 0 vuol dire che nome 2  viene prima di nome3
         //> 0 vuol dire che nome 2  viene dopo di nome3
            printf("OK hai un buona memoria\n");
        }
         else
        { 
            printf("sei un pò confuso.....non hai inserito lo stesso nome\n");
        
        }
          if(strcmp(nome2, nome3)<0)
        {
            printf("ordine corretto nome2 nome3\n");
        }
         else
        { 
            printf("non iserito ordine nome2 nome3\n");
        
        }
          if(strcmp(nome2, nome3)>0)
        {
            printf("ordine corretto nome3 nome2\n");
        }
         else
        { 
            printf("non hai inserito ordine nome3 nome2\n");
        
        }
        
putchar('\n');
    
    return 0;
}
