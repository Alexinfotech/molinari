/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>// libreria sleep




int main()
{
     int N ;//insererito utente
     int x;
     int y;
    
    
    printf("indica il  numero: ");
    scanf("%d", &N);
    
    x = 1; //x=10 conto alla rovescia        //x=1    // va forzata solo la prima volta
    
    
  /*  while( x <= N )  //versione conto alla rovescia //x <= N //x minire uguale a N, continua il cicli fino a quando non arriva 
                              //il valore di N inserito dall'utente
    {
        
        printf("-%d-\n", x);
        //x = x -1;//aumenta di uno il valore corrente del ciclo
         x++;
      
    }//incrementa ogni volta che l'itruzione riparte e torna fino a qui
   
    printf("FINE");*/
    
    while( x <= N )  //stampo il quadrato di x e poi stampo il vvalore
    {
        x++;
        printf("\n-%d-", x);
        
        y = x*x;
        printf("\t-%d-", y);
        //printf("-%d-", x*x);
        
        sleep(1);
     
    }
   
   
   
    return 0;
}
