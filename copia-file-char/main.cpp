

#include <iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>

int main() {
  FILE *fp_in; 
  FILE *fp_out;
  fp_in =NULL;
  fp_out =NULL;
  char testo[200];
  char *copia;
  //////////---------->>>>>>>>>>>>>>>>>>>>ELIMINARE COMMENTO DA RIGA 16 A 19 PER CREARE FILE DA COPIARE
/*fp_in=fopen("crea file.txt", "w");
fprintf(fp_in,"ciao a tutti ora verrà fatta una copia di questo file");
fclose(fp_in);
fp_in=fopen("crea file.txt", "r");*/


fp_in=fopen("file.txt", "r"); //<<-------METTERE SOTTO COMMENTO RIGA 22 PER USARE FILE CREA
fp_out=fopen("file copia.txt\n", "w");//.  \n == ogni run crea un nuovo file
  
while(1) {
    copia=fgets(testo, 200, fp_in);
    if( copia==NULL )
      break;
    fputs(testo,fp_out);
    
  }
 fclose(fp_out);
 fp_in=fopen("file copia.txt", "w");
 fprintf(fp_in,"copia del testo \n");


/*fp_in=fopen("file.txt", "a");//////-------<<<<<<per utilizzzare cancellare \n da riga 23
//fgets(testo,255,fp_out);
fprintf(fp_in,"\ntesto copiato in file copia.txt CANCELLARE QUETSA RIGA PRIMA DI OGNI RUN");*/
	
  fclose(fp_in);
  
 

  return 0;
}
 

