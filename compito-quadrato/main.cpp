/******************************************************************************
Utilizzando il linguaggio C++ definire una classe Quadrato con metodi che calcolino i suoi elementi
geometrici fondamentali (perimetro, area e diagonale) più un metodo aggiuntivo CreaFile che
permetta di memorizzare nel file sequenziale di testo Quadrati.txt, perimetro, area e diagonale dei
quadrati di lato uguale ad 1,2,3…n-1, n (con n compreso tra 20 e 100)

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    FILE *fp;
 int lato;
 int perimetro;
 int area;
 float diagonale;
 
 
 	if((fp=fopen("Dati_quadrato.txt", "a"))==NULL) 
	{
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	cout<<"Inserisci la lunghezza del lato";
	cout<<"la lunghezza deve esser compresa tra 20 e 100-->  ";;
	cin>>lato;
	  //if(lato<19 && lato>101)//utilizzato per creare il grafico
		if(lato<19 || lato>101)
	{
	    cout<<"hai digitato una quantità inadeguata";
	}
	else
	{
		perimetro=lato*4;
		area=lato*lato;
		diagonale=lato*sqrt(2);
		//fprintf(fp," LATO         PERIMETRO       AREA          DIAGONALE \n");
		//fprintf(fp,"*******************************************************\n");
	    fprintf(fp," %d           %d              %d         %10.4f        \n", lato, perimetro, area,diagonale);
    fclose(fp);
}
    return 0;
}
