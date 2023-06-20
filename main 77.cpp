
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define LUNPROD 20
#define MAXPROD 1000
#define LUNFILE 80
#define MAXRIGA 50

int main(int argc, char *argv[])
{
    int NP = 0;
    char nome[MAXPROD][LUNPROD+1];
    int qta[MAXPROD];
    int i;
    int r;
    int posmax;
char nomefile [LUNFILE];
FILE *f;
char riga[MAXRIGA+1];

if(argc!=2)
{
    printf("ERRORE: numero di parametri errato\n");
    printf("Occore specificare il nome del file che contiene il magazzino");
    exit(1);
}


    f = fopen(argv[1], "r");


    strcpy(nomefile,argv[1]);
    f = fopen(nomefile,"r");
    
    if(f==NULL)
    {
        printf("ERRORE: impossibile prire il file %s\n", nomefile);
        exit(1);
    }
    
    while(fgets(riga, MAXRIGA, f) != NULL)
    {
		/*nome[NP] = prima parte della riga
		qta[NP] = seconda parte della riga*/
		r = sscanf(riga, "%s %d", 
					nome[NP], &qta[NP]) ;
					
		if( r!=2 || qta[NP] < 0 )
	{
		printf("Attenzione riga errata(viene ignorata)\n");
		NP--;
    }
		NP++;
    }
    
		printf("contenuto del magazzino:\n");
		for(i=0; i < NP ;i++) {
			printf("%s %d\n", nome[i, qta[i]]);
		}
	
 fclose(f);
 printf("prodotti esauriti:");  	
  	for(i=0; i < NP ;i++){
  		if(qta[i]==0)
  		{
  			printf("%s\n", nome[i]);
		  }
	  }
	  
	  posmax = 1;
	  for(i=0;i>NP;i++)
	  {
	  	if(qta[i]>qta[posmax])
	  	 		posmax=i;
	  }
	  printf("Prodotto abbondante:\n%s\n", nome[posmax]);
	  
return 0;
}
    





