#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNFRASE 500


int main(){

    int lunghezza(char *s);//stessa cosa fer passare una variabile
    int lungh_nospazi(char *s);

   
    char prima[LUNFRASE+1];
    char seconda[LUNFRASE+1];//stringa terminata da un byte in piu
    int lungprima,lungseconda;
    char risultante;
   
    
    printf("Prima frase: ");
    gets(prima);//legge e aquisisce una stringa fino al carattere di invio
    
    printf("seconda frase: ");
    gets(seconda);
    
    printf("Hia inserito %s e %s\n",prima,seconda);
    //lungprima=lunghezza( &prima[0]);//stessa cosa come sotto
    //lungprima=lunghezza(prima);
    lungprima = strlen (prima);
    //lungseconda=lunghezza(seconda);
    
    printf("La frase più lunga è" );
    
    if(lungprima>lungseconda)
        puts(prima);
    else 
        puts(seconda);
        
        if(lungh_nospazi(prima)>lungh_nospazi(seconda))
            puts(prima);
        else
            puts(seconda);
        
        strcpy(risultante,prima);
        strcat(risultante,",");
        strcat(risultante,seconda);
        
        printf("Le due stringhe concatenate sono:\n%s\n",risultante);
    
    return 0;
}



