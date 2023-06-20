/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "quadrato.h"

using namespace std;

int main(){
    
    int scelta;
    char temp;
    
quadrato cubo;//nome oggetto = cubo

while(scelta<1 || scelta>2)
    {
        cubo.presentazione();
        cout<<"\n\t\tIl numero selezionato è errato  ";
        cout<<"\n\t\tINSERIRE NUMERO RICHIESTO 1 0 2  --->   ";
        cin>>scelta;
        scanf("%c", &temp ); 
    }

do  {
    switch(scelta){
case 1:
        
       
        cubo.quadrato_ins();
        cubo.stampa();
        cubo.controllo();
        cubo.somma_base();
        cubo.somma_colonna();
        cubo.colonna_discendente();
        cubo.colonna_ascendente();
        cubo.controllo_finale();
        cout<<"\n\n\tGAME OVER";
        
case 2:
cout<<"\n\n\t---< GAME OVER >---";
break;
    }
}
while(scelta != 2);

   return 0;
}

