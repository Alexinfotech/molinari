#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>// libreria sleep
int main()
{

  
   
   
       
    int N ;//insererito utente
    int x;//contatore
    int y;
    int fpre;
    int fprepre;
    int f;
    int Z;
    int T;
    printf("FUNZIONE SLEEP\n");
    printf("DIGITA UN  NUMERO COMPRESO TRA 10/20 : ");
    scanf("%d", &N);
    printf("NUMERI        QUADRATO: ");
    x=0;
    if(N>=10 && N<=20) {
    while( x <= N )  //stampo il quadrato di x e  il suo valore al quadrato
    {
        x=x+1;
        printf("\n-%d-", x);
        
        y = x*x;
        printf("\t\t-%d-", y);
        //printf("-%d-", x*x);
        sleep(1);
     
    }
    }
        else
        {
            printf("hai fatto la scelta sbagliata");
        }
    
    
    N=20;
    printf("\n\nSEQUENZA FIBONACCI: \n");
    printf("1 ");
    printf("1 ");
    fpre = 1;
    fprepre = 1;
    x=3;  //conattore parto  dal terzo numero, oppure ( x=1;  while (x <= N-2) )
    
    while( x <= N ) 
                             
    {
        
        f = fpre + fprepre; //F(i) =F(i-1)+ F(i-2)
        printf("%d ",f);
    
        fprepre = fpre;
        fpre = f;
        //sleep(1);
        x++;
}        
    
  N=0;
  x =10; 
    printf("\n\n\t\t\tCONTO ALLA ROVESCIA\n");
    
    
  while( x >= N )  
    {
       
        printf("\n\t\t\t-%d-", x);
        x = x-1;
        
       
      sleep(1);  
    }
    
       printf("\n\n\t\t      B U O N   N A T A L E . . .\n");
            printf("\t\t\n");
            printf("\t\t             @    \n");
            printf("\t\t            @@@    \n");
            printf("\t\t           @@@@@    \n");
            printf("\t\t          @@@@@@@    \n");
            printf("\t\t         @@@@@@@@@    \n");
            printf("\t\t        @@@@@@@@@@@    \n");
            printf("\t\t       @@@@@@@@@@@@@    \n");
            printf("\t\t      @@@@@@@@@@@@@@@    \n");
            printf("\t\t     @@@@@@@@@@@@@@@@@    \n");
            printf("\t\t    @@@@@@@@@@@@@@@@@@@    \n");
            printf("\t\t             #\n");
            printf("\t\t             #\n");
            printf("\t\t             #\n");
            printf("\t\t             #\n");
            printf("\t\t\n");
            printf("\t\t");
            printf("\t\t     A U G U R I I I I I I I . . .\n");
    
    
    
    
    
    printf("\n\n\t\t      _____BUON NATALE!!!____\n");
   
return 0;
}


    
 
 
 
 


