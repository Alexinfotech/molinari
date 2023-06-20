/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp, *fmax, *fmin;
	int  val, numero;
	
	if((fp=fopen("numeri.txt", "rt"))==NULL) {
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	
	if((fmax=fopen("maggiori.txt", "wt"))==NULL) {
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	
	if((fmin=fopen("minori.txt", "wt"))==NULL) {
		printf("Errore nell'apertura del file'");
		exit(1);
	}
	
	printf("Valore:");
	scanf("%d", &val);
	
	while(!feof(fp)){
		fscanf(fp,"%d\n", &numero); //legge i numeri dal file
  		if (numero<val)
			fprintf(fmin,"%d\n", numero); //se minori li inserisce in un file di nome minori.txt
  		else
	 		fprintf(fmax,"%d\n", numero); //se maggiori o uguali li inserisce in un file di nome maggiori.txt
 }
	fclose(fp);
	fclose(fmin);
	fclose(fmax);
	
return 0;
}
