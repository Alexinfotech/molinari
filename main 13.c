/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX 5
int main()
{
    
        int n, somma;
        int i;
        float media;
        int validi;
        //const int MAX = 100;
        somma = 0;
        validi = 0;//dati bvalidi inseriti
    
    for( i=0; i<MAX; i++ ){
    
    
        printf("inserisci un numero; ");
        scanf("%d", &n);
        
    if( n>=0 && n<=30 ){
        
        somma = somma + n;
        validi++;
        }
    }

    if(validi != 0){
        //media= somma / MAX;  //media=(somma+0.0 / MAX) aggiungi a somma, +0.0  tra parentesi rotonde per creare un numero reale
    
        media = (float)somma / validi;    // typecast da int a float variabile somma
        printf("la media vale: %.1f\n", media);//.1 serve per decidere le cifre decimali
    }
    else{
        
        printf("non ci sono dati validi");
        }
    return 0;
}
