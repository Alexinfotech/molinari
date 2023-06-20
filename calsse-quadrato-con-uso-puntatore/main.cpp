#include "quadrato.h"

int main() {

   int a,b,c,i,lato,N;

   cout<<"CLASSE QUADRATO CON USO DI UN PUNATORE DI TIPO INTERO\n\n";
   cout << "Inserisci la dimensione del lato del quadrato \n";
   cout<<"che sia compreso tra 20 e 100 -->  ";
   cin>>N;
 
if( N>'a' && N<'z' || N>'A' && N<'Z' || N>19 && N<99) //controllo lettere e dimensione
   {
       
            for(lato=1; lato<N+1;lato++)
            {
                quadrato verifica(lato);
                verifica.perimetro(a);
                verifica.area(b),
                verifica.diagonale(c);
                verifica.stampa();
                verifica.file();
             }
   } 
    else
        {
            cout<<"carattere o dimensione non consentito";
        }

   return 0;
}
