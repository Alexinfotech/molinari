
/******************************************************************************

caratteri
scrivere un programma che legga un carattere singolo alfabetico
che stampi a video il caattere stesso e quelllo che precede  
e quello dopo nell'ordine alfabetico e dica in che posizione si trova nell'alfabeto
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{

  
   
   
       
    char c;//insererito utente
    char prima, dopo;//alfabeto
    
    
    printf("inserisci un carattere: ");
    scanf("%c", &c);
    
    
        if (    ( c >= 'A' && c <= 'Z' ) ||       // codice asci della 'A' maiuscola alla 'Z' maiuscola or
                ( c >= 'a' && c <= 'z' )    )     // codice asci della 'a' minuscola alla 'z' minuscola 
    {
        
            printf("Hai inserito la lettera %c\n\n",c);
        
    }
    
        if (    ( c > 'A' && c < 'Z' ) ||           // 'A' 'Z' non compresi  INTERMEDIO
                ( c > 'a' && c < 'z' )    )         // 'a' 'z' non compresi  
    {
         
            prima= c+1;
            dopo = c-1;
            printf("la lettera precedente è %c\nla lettera successivo è %c\n",
            prima,dopo );
        
    }

        else{ //estrema
        
            if( c == 'A' || c == 'a' ){
            
                     dopo = c+1;
                printf("la  lettera successiva è %c\n",dopo);}

                else{ //di sicuro è Z
                    
                        prima = c-1;

                    printf("la lettera precedente è %d\n:",prima);}

}
 return 0;
}
