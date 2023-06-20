//GENERA LISTINO PREZZI unitario PER ESERCENTI ALL'INGROSSO CON PREZZO CONSIGLIATO al pubblico preivato sconto applicato-5%
//non prezzi al kg o generi alimentari
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct 
    {
    char prodotto[30];
    float prezzo;
}prodotti;

int main() {
	FILE *fp;

  
    
	int dim;
	int i;
	prodotti M[dim];
	float prezzo;
	float IVA_sing;
	float TOT_compr_iva;
	float sconto;


	if((fp=fopen("LISTINO", "a"))==NULL) 
	{
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	cout<<"Inserisci l'importo lordo COMPRESO IVA";
	cout<<"INSERISCI LA QUANTITA' PRODOTTI  DA INSERIRE NELLA FATTURA\nMAx 12 PRODOTTI -->  ";;
	cin>>dim;
	
	if(dim<=0 && dim>=12)
	{
	    cout<<"hai digitato una quantità inadeguata";
	}
	else
	{
	   
	for(i=0;i<dim;i++){
		printf("PRODOTTO: ");
		scanf("%s", M[i].prodotto);
		printf("COSTO: ");
	    scanf("%f", &M[i].prezzo);
	    
		IVA_sing=M[i].prezzo/100*22;
		TOT_compr_iva=M[i].prezzo/100*132+IVA_sing;
		sconto=TOT_compr_iva/100*95;
		fflush(stdin);
	    fprintf(fp,"%s  %10.2f prezzo  %10.2f IVA %10.2f Prezzo+IVA  %10.2f Prezzo consigliato al netto dello sconto \n", M[i].prodotto, M[i].prezzo,IVA_sing,TOT_compr_iva,sconto);
    }
}
	

	 
fclose(fp);
	return 0;
	
}