/*
1. Scrivere una funzione, alla quale passare due parametri: il riferimento di un puntatore ad intero, ed
un intero. L’algoritmo dovrà svolgere quanto segue: (Punti 2)
a. Carica un vettore di interi generato casualmente; il cui nome è rappresentato dal
puntatore passato come parametro e la dimensione è passata dal secondo parametro.
Per il caricamento dovrà essere utilizzata l’aritmetica dei puntatori (Ex. NO: v[i] SI: *(v+i))
b. Calcola la media dei valori presenti in posizione dispari e ne restituisce il risultato in uscita
dalla funzione.

2. Scrivere un main che svolga quanto segue: (Punti 4)
a. Chieda all’utente di inserire la dimensione del vettore
b. Richiami la precedente funzione
c. Visualizzi il risultato dalla funzione
d. Controlla se il valore restituito sia compreso tra 2 e 10;
i. Se SI: Chiedere all’utente se vuole utilizzare il valore come dimensione di un nuovo
vettore
1. Se SI: ripartire dal punto b) fornendo la nuova dimensione come parametro
2. Se NO: Uscire dal programma
ii. Altrimenti Chiedere all’utente se vuole far ripartire la funzione con una nuova
dimensione;
1. Se SI: Consentire all’utente di inserire la nuova dimensione e ripartire dal
punto b) fornendo la nuova dimensione come parametro
2. Se NO: Uscire dal programma

*/
#include "verifica.h"

int main(){
verifica compito;
int dim;
int scelta;
int media;


char rientra;
    do{

    cout<<"VETTORE CON GENENERATORE DI NUMERI CASUALI"<<endl;
    cout<<"1) inserisci dimensione  vettore"<<endl;
    cout<<"2) exit"<<endl;
    cout<<"scelta -->  ";
    cin>>scelta;

    switch(scelta){
 
    case 1:
        compito.ins_dim(dim); 
                     
                                do{
                               
                        
                                cout<<"\nSE LA MEDIA E' COMPRESA TRA IL 2 E IL 10 PUOI UTLIZZARLA PER LA DIEMNSIONE DI UN NUOVO VETTORE"<<endl;
                                cout<<"1) SI"<<endl;
                                cout<<"2) NO --> inserisci nuova dimensione"<<endl;;
                                cout<<"3) exit"<<endl;
                                cout<<"scelta -->  ";
                                cin>>scelta;
    
                                switch(scelta){
                                case 1:
                                    compito.ins_media(dim); 
                                    return 0;
                                    break;
            
                                case 2:
                                    compito.ins_dim(dim); 
                                    default:
                                    break;
                                case 3:
                                    return 0;
                                    break;
                                  
                                }
                                
                                }while(scelta!=4);
                                              
                  
        
        
              
    case 2:
        break;
        default:
     cout<<"Scelta non consentita."<<endl;
     break;
    }
}while(scelta!=2);
rientra;
return 0;
}



  
   
    


   





  