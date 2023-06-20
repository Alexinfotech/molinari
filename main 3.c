/******************************************************************************

caratteri
scrivere un programma che legga un carattere singolo alfabetico
che stampi a video il caattere stesso e quelllo che precede  
e quello dopo nell'ordine alfabetico
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    /* può memorizzare un singolo caratere
    cioè il codice scii corrispondente al 
    carettere stesso*/
    /*c = 65;
    c = 'A';//singolo apice,inserire solo una lettera
    no c= A;//dà errore
    no c = 'AB'; 
    c = c +1;// ora c vale 66 cioè 'B'
    scanf("%c", &c);// %c carattare %d interi, %f float, %lf double
    printf("il carattre %c eqauivale al codice ascii", c);*/
   
   
       
    char c;//insererito utente
    char prima, dopo;//alfabeto
    
    
    printf("inserisci un carattere: ");
    scanf("%c", &c);
    printf("il codice ascii equivale a %d\n:",c);
// 
    prima = c-1;
    dopo = c+1;
    
    printf("Hai inserito %c\nil carattere precedente è %c con codice ascii %d\n",c,prima,prima);
    printf("il carattere successivo è %c con codice ascii %d",dopo,dopo );
    return 0;
}
