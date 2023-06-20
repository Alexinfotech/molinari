
/******************************************************************************

caratteri
scrivere un programma che legga un carattere singolo alfabetico
che stampi a video il caattere stesso e quelllo che precede  
e quello dopo nell'ordine alfabetico e dica in che posizione si trova nell'alfabeto
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>// libreria sleep
int main()
{

  
   
   
       
    int N ;//insererito utente
    int x;
    
    
    printf("indica il  numero: ");
    scanf("%d", &N);
    
    x = 10; //x=10 conto alla rovescia        //x=1    // va forzata solo la prima volta
    
    
    while( x >= N )  //versione conto alla rovescia //x <= N //x minire uguale a N, continua il cicli fino a quando non arriva 
                              //il valore di N inserito dall'utente
    {
        
        printf("-%d-\n", x);
        x = x -1;//aumenta di uno il valore corrente del ciclo
        
      sleep(1);  
    }//incrementa ogni volta che l'itruzione riparte e torna fino a qui
    
     printf("\n\tBUON NATALE!!!");
    return 0;
}
