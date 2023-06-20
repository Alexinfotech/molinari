/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *f;
    char riga[255];
   // char *p;//puntatore lettura
    FILE *fu;//file in uscita
    
    f = fopen("prova1.txt", "r");//crea un puntatore ad un file
    //usa f per leggere il file
    //nella ricerca del fie su disco,mac es home/documents
    //windows es: user\\documents
    //NULL è un puntatorem con indirizzo xdx
    if(f == NULL)//NUL con una elle sola e un carattere di controllo come codice ascii 0 un char
    {
        printf("errore: impossibile aprire il file prova.txt");
        exit(1);
    }
    
    fu = fopen("prova2.txt", "w");
    if(f == NULL)
    {
        printf("errore: impossibile aprire il file prova.txt");
        exit(1);
    }
    //fgetc();
    //fscanf();
    
// buleana per controllora se ha letto tutto il contenuto del file 
    
    
    //while(!feof(f)) 
    while(fgets( riga, 255 ,f  ) != NULL)// ciclo per leggere una riga alla volta
    {
       // fgets( riga, LUN ,f  );
        
       // if(!feof(f)) 
       // if(p != NULL)
       //if(fgets( riga, 255 ,f  ) != NULL) || usaroe con while
        
    
    riga[strlen(riga)-1] = 0;
        printf("Ho letto: %s\n", riga);
        
        
    }
    fprintf(fu, "%s\n", riga);
    //fputs(riga, fu);
    //fputc();
    
    fclose(f);
    fclose(fu);//d questo momento il programma ha scollegato il puntatore
    //al file.
    return 0;
}
