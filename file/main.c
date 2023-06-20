/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
  
    FILE *fp;
    long n;
   // char dato[255];
    fp=fopen("proV.txt","w");
    //fprintf(fp,"ciao a tutti ");
  //  fprintf(fp,"ciao a tutti ");
     fprintf(fp,"ciao a tutti ");
     fprintf(fp,"ciao a tutti");
     //long ftell(FILE *fp)
      fseek(fp,0L,SEEK_END);
	n=ftell(fp);
     //ftell
     //fseek
    fclose(fp);//
    printf("Dimensione del file in byte: %ld\n", n);

   /* fp=fopen("ene.txt","r");
  //fscanf(fp,"%s",dato);
  //fscanf(fp,"%s",dato);
    fgets(dato,255,fp);
    fprintf(stdout,"%s",dato);
    fclose(fp);*/
    //FSEEK 
    //FTELL
    //CSV SU OGNI STRINGA E DIVIASA E SEPARATO DA UNA VIRGOLA
    //
   

 

    return 0;
}
